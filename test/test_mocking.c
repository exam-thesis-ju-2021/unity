#include "unity.h"

#include "mock_module_a.h"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void init_stub(int cmock_num_prev_calls) {
	return;
}

void reset_stub(int cmock_num_prev_calls) {
	return;
}

double dbh_stub(double value, int cmock_num_prev_calls) {
	return value / 2;
}

double mbt_stub(double value, int cmock_num_prev_calls) {
	return value * 2;
}

double pot_stub(double value, int cmock_num_prev_calls) {
	return pow(value, 2);
}

double sqr_stub(double value, int cmock_num_prev_calls) {
	return sqrt(value);
}


void setUp(void)
{
	/* Stubs */
	init_StubWithCallback(&init_stub);
	reset_StubWithCallback(&reset_stub);
	divide_by_half_StubWithCallback(&dbh_stub);
	multiply_by_two_StubWithCallback(&mbt_stub);
	power_of_two_StubWithCallback(&pot_stub);
	square_root_StubWithCallback(&sqr_stub);
	/* - - - */

	//init_CMockExpect();
	//reset_CMockExpect();

	init();
}


void tearDown(void)
{
	reset();
}


void test_mock_assertion_int32_equal(void)
{ 
	int32_t exp = 128;
	TEST_ASSERT_EQUAL_INT32(exp, (int32_t)divide_by_half((int32_t)multiply_by_two(exp)));
	TEST_ASSERT_EQUAL_INT32(exp, (int32_t)square_root((int32_t)power_of_two(exp)));
}

void test_mock_assertion_uint32_equal(void)
{
	uint32_t exp = 128;
	TEST_ASSERT_EQUAL_UINT32(exp, (uint32_t)divide_by_half((uint32_t)multiply_by_two(exp)));
	TEST_ASSERT_EQUAL_UINT32(exp, (uint32_t)square_root((uint32_t)power_of_two(exp)));
}

void test_mock_assertion_hex32_equal(void)
{
	int32_t exp = 0x00000800u;
	TEST_ASSERT_EQUAL_HEX32(exp, (int32_t)divide_by_half((int32_t)multiply_by_two(exp)));
	TEST_ASSERT_EQUAL_HEX32(exp, (int32_t)square_root((int32_t)power_of_two(exp)));
}

void test_mock_assertion_float_equal(void)
{
	float_t exp = 128.000f;
	TEST_ASSERT_EQUAL_FLOAT(exp, (float_t)divide_by_half((float_t)multiply_by_two(exp)));
	TEST_ASSERT_EQUAL_FLOAT(exp, (float_t)square_root((float_t)power_of_two(exp)));
}

void test_mock_assertion_double_equal(void)
{
	double_t exp = 128.000f;
	TEST_ASSERT_EQUAL_DOUBLE(exp, (double_t)divide_by_half((double_t)multiply_by_two(exp)));
	TEST_ASSERT_EQUAL_DOUBLE(exp, (double_t)square_root((double_t)power_of_two(exp)));
}
