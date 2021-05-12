#include "unity.h"
#include <stdbool.h>

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
	TEST_ASSERT(true == true);
	TEST_MESSAGE("Verifying that test_fixtures() has been run in between setup() and tearDown().");
}