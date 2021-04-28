#include "unity.h"

void setUp(void)
{
	TEST_MESSAGE("Verifying that setUp() is executed.");
}

void tearDown(void)
{
	TEST_MESSAGE("Verifying that tearDown() is executed.");
}

void test_fixtures(void)
{
	TEST_MESSAGE("Running test...");
	TEST_ASSERT_EQUAL_UINT(0, 0);
	TEST_MESSAGE("Ending test...");
}