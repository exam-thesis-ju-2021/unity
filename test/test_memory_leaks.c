/*
    Based on:
    https://github.com/ThrowTheSwitch/Unity/blob/master/extras/memory/test/unity_memory_Test.c#L63

    Only implemented the tests that are easily incorporated into other unit testing frameworks.
*/

#include "unity.h"
#include "unity_memory.h"
#include <stdlib.h>
#include <string.h>

void setUp(void)
{
    UnityMalloc_StartTest();
}

void tearDown(void)
{
    UnityMalloc_EndTest();
}

void test_realloc_smaller_is_unchanged(void)
{
    void* vp1 = malloc(10);
    void* vp2 = realloc(vp1, 5);

    TEST_ASSERT_NOT_NULL(vp1);
    TEST_ASSERT_EQUAL_PTR(vp1, vp2);
    free(vp2);
}

void test_realloc_same_is_unchanged(void)
{
    void* vp1 = malloc(10);
    void* vp2 = realloc(vp1, 10);

    TEST_ASSERT_NOT_NULL(vp1);
    TEST_ASSERT_EQUAL_PTR(vp1, vp2);
    free(vp2);
}

void test_realloc_larger_is_needed(void)
{
    void* vp2;
    void* vp1 = malloc(10);

    TEST_ASSERT_NOT_NULL(vp1);

    strcpy((char*)vp1, "123456789");

    vp2 = realloc(vp1, 15);

    TEST_ASSERT_EQUAL_STRING("123456789", vp2);
    free(vp2);
}


void test_realloc_nullpointer_is_like_malloc(void)
{
    void* vp = realloc(0, 15);
    TEST_ASSERT_NOT_NULL(vp);
    free(vp);
}

void test_realloc_size_zero_frees_mem_and_return_null_pointer(void) {
    void* vp1 = malloc(10);
    void* vp2 = realloc(vp1, 0);
    TEST_ASSERT_EQUAL_PTR(0, vp2);
}

void test_calloc_fills_with_zero(void)
{
    void* vp = calloc(3, sizeof(char));
    char* s = (char*)vp;
    TEST_ASSERT_NOT_NULL(vp);
    TEST_ASSERT_EQUAL_HEX8(0, s[0]);
    TEST_ASSERT_EQUAL_HEX8(0, s[1]);
    TEST_ASSERT_EQUAL_HEX8(0, s[2]);
    free(vp);
}

void test_free_null_safety(void)
{
    free(NULL);
}

void test_detects_leak(void)
{
    void* vp = malloc(10);
    TEST_ASSERT_NOT_NULL(vp);
    char* s = (char*)vp;
    s[10] = (char)0xFF;
}

void test_buffer_overrun_found_during_free(void)
{
    void* vp = malloc(10);
    char* s = (char*)vp;
    TEST_ASSERT_NOT_NULL(vp);
    s[10] = (char)0xFF;
    free(vp);
}

void test_buffer_overrun_found_during_realloc(void)
{
    void* vp = malloc(10);
    char* s = (char*)vp;
    TEST_ASSERT_NOT_NULL(vp);
    s[10] = (char)0xFF;
    vp = realloc(vp, 100);
}

void test_buffer_guard_write_found_during_free(void) 
{
    void* vp = malloc(10);
    char* s = (char*)vp;
    TEST_ASSERT_NOT_NULL(vp);
    s[-1] = (char)0x00;
    s[-2] = (char)0x01;
    free(vp);
}

void test_buffer_guard_write_found_during_realloc(void)
{
    void* vp = malloc(10);
    char* s = (char*)vp;
    TEST_ASSERT_NOT_NULL(vp);
    s[-1] = (char)0x01;
    vp = realloc(vp, 100);
}