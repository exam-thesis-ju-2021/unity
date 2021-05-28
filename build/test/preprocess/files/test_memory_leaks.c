#include "external/unity_memory.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.0/vendor/unity/src/unity.h"




















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

    void* vp1 = unity_malloc(10);

    void* vp2 = unity_realloc(vp1, 5);



    do {if ((((vp1)) != 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(28))));}} while(0);

    UnityAssertEqualNumber((UNITY_INT32)((vp1)), (UNITY_INT32)((vp2)), (

   ((void *)0)

   ), (UNITY_UINT)(29), UNITY_DISPLAY_STYLE_HEX32);

    unity_free(vp2);

}



void test_realloc_same_is_unchanged(void)

{

    void* vp1 = unity_malloc(10);

    void* vp2 = unity_realloc(vp1, 10);



    do {if ((((vp1)) != 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(38))));}} while(0);

    UnityAssertEqualNumber((UNITY_INT32)((vp1)), (UNITY_INT32)((vp2)), (

   ((void *)0)

   ), (UNITY_UINT)(39), UNITY_DISPLAY_STYLE_HEX32);

    unity_free(vp2);

}



void test_realloc_larger_is_needed(void)

{

    void* vp2;

    void* vp1 = unity_malloc(10);



    do {if ((((vp1)) != 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(48))));}} while(0);



    strcpy((char*)vp1, "123456789");



    vp2 = unity_realloc(vp1, 15);



    UnityAssertEqualString((const char*)(("123456789")), (const char*)((vp2)), (

   ((void *)0)

   ), (UNITY_UINT)(54));

    unity_free(vp2);

}





void test_realloc_nullpointer_is_like_malloc(void)

{

    void* vp = unity_realloc(0, 15);

    do {if ((((vp)) != 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(62))));}} while(0);

    unity_free(vp);

}



void test_realloc_size_zero_frees_mem_and_return_null_pointer(void) {

    void* vp1 = unity_malloc(10);

    void* vp2 = unity_realloc(vp1, 0);

    UnityAssertEqualNumber((UNITY_INT32)((0)), (UNITY_INT32)((vp2)), (

   ((void *)0)

   ), (UNITY_UINT)(69), UNITY_DISPLAY_STYLE_HEX32);

}



void test_calloc_fills_with_zero(void)

{

    void* vp = unity_calloc(3, sizeof(char));

    char* s = (char*)vp;

    do {if ((((vp)) != 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(76))));}} while(0);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT8 )((0)), (UNITY_INT)(UNITY_INT8 )((s[0])), (

   ((void *)0)

   ), (UNITY_UINT)(77), UNITY_DISPLAY_STYLE_HEX8);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT8 )((0)), (UNITY_INT)(UNITY_INT8 )((s[1])), (

   ((void *)0)

   ), (UNITY_UINT)(78), UNITY_DISPLAY_STYLE_HEX8);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT8 )((0)), (UNITY_INT)(UNITY_INT8 )((s[2])), (

   ((void *)0)

   ), (UNITY_UINT)(79), UNITY_DISPLAY_STYLE_HEX8);

    unity_free(vp);

}



void test_free_null_safety(void)

{

    unity_free(

        ((void *)0)

            );

}



void test_detects_leak(void)

{

    void* vp = unity_malloc(10);

    do {if ((((vp)) != 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(91))));}} while(0);

    char* s = (char*)vp;

    s[10] = (char)0xFF;

}



void test_buffer_overrun_found_during_free(void)

{

    void* vp = unity_malloc(10);

    char* s = (char*)vp;

    do {if ((((vp)) != 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(100))));}} while(0);

    s[10] = (char)0xFF;

    unity_free(vp);

}



void test_buffer_overrun_found_during_realloc(void)

{

    void* vp = unity_malloc(10);

    char* s = (char*)vp;

    do {if ((((vp)) != 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(109))));}} while(0);

    s[10] = (char)0xFF;

    vp = unity_realloc(vp, 100);

}



void test_buffer_guard_write_found_during_free(void)

{

    void* vp = unity_malloc(10);

    char* s = (char*)vp;

    do {if ((((vp)) != 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(118))));}} while(0);

    s[-1] = (char)0x00;

    s[-2] = (char)0x01;

    unity_free(vp);

}



void test_buffer_guard_write_found_during_realloc(void)

{

    void* vp = unity_malloc(10);

    char* s = (char*)vp;

    do {if ((((vp)) != 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(128))));}} while(0);

    s[-1] = (char)0x01;

    vp = unity_realloc(vp, 100);

}
