#include "unity.h"
#include "library/module_a.h"
#include "library/peripherals.h"
#include "library/hardware.h"
#include "library/peripheral.h"
#include "library/peripherals/divide_by_half.h"
#include "library/peripherals/multiply_by_two.h"
#include "library/peripherals/power_of_two.h"
#include "library/peripherals/square_root.h"

#include <stdio.h>
#include <stdlib.h>

void setUp(void)
{
	init();
}

void tearDown(void)
{
	reset();
}

void test_assertion_boolean_true(void)
{
	bool act = (NULL == NULL);
	TEST_ASSERT_TRUE(act);
}

void test_assertion_boolean_false(void)
{
	bool act = (NULL != NULL);
	TEST_ASSERT_FALSE(act);
}

void test_assert_null(void)
{
	int32_t* act = NULL;
	TEST_ASSERT_NULL(act);
}

void test_assert_not_null(void)
{
	int32_t act = 128;
	TEST_ASSERT_NOT_NULL(&act);
}

void test_assertion_int32_equal(void)
{
	int32_t exp = 128;
	TEST_ASSERT_EQUAL_INT32(exp, (int32_t)divide_by_half((int32_t)multiply_by_two(exp)));
	TEST_ASSERT_EQUAL_INT32(exp, (int32_t)square_root((int32_t)power_of_two(exp)));
}

void test_assertion_uint32_equal(void)
{
	uint32_t exp = 128;
	TEST_ASSERT_EQUAL_UINT32(exp, (uint32_t)divide_by_half((uint32_t)multiply_by_two(exp)));
	TEST_ASSERT_EQUAL_UINT32(exp, (uint32_t)square_root((uint32_t)power_of_two(exp)));
}

void test_assertion_hex32_equal(void)
{
	int32_t exp = 0x00000800u;
	TEST_ASSERT_EQUAL_HEX32(exp, (int32_t)divide_by_half((int32_t)multiply_by_two(exp)));
	TEST_ASSERT_EQUAL_HEX32(exp, (int32_t)square_root((int32_t)power_of_two(exp)));
}

void test_assertion_float_equal(void)
{
	float_t exp = 128.000f;
	TEST_ASSERT_EQUAL_FLOAT(exp, (float_t)divide_by_half((float_t)multiply_by_two(exp)));
	TEST_ASSERT_EQUAL_FLOAT(exp, (float_t)square_root((float_t)power_of_two(exp)));
}

void test_assertion_double_equal(void)
{
	double_t exp = 128.000f;
	TEST_ASSERT_EQUAL_DOUBLE(exp, (double_t)divide_by_half((double_t)multiply_by_two(exp)));
	TEST_ASSERT_EQUAL_DOUBLE(exp, (double_t)square_root((double_t)power_of_two(exp)));
}

void test_assertion_float_infinity(void)
{
	float_t act = INFINITY;
	TEST_ASSERT_FLOAT_IS_INF(act);
}

void test_assertion_double_infinity(void)
{
	double_t act = INFINITY;
	TEST_ASSERT_DOUBLE_IS_INF(act);
}

void test_assertion_float_not_infinity(void)
{
	float_t act = 0.0f;
	TEST_ASSERT_FLOAT_IS_NOT_INF(act);
}

void test_assertion_double_not_infinity(void)
{
	double_t act = 0.0;
	TEST_ASSERT_DOUBLE_IS_NOT_INF(act);
}

void test_assertion_float_negative_infinity(void)
{
	float_t act = -INFINITY;
	TEST_ASSERT_FLOAT_IS_NEG_INF(act);
}

void test_assertion_double_negative_infinity(void)
{
	double_t act = -INFINITY;
	TEST_ASSERT_DOUBLE_IS_NEG_INF(act);
}

void test_assertion_float_not_negative_infinity(void)
{
	float_t act = -0.0f;
	TEST_ASSERT_FLOAT_IS_NOT_NEG_INF(act);
}

void test_assertion_double_not_negative_infinity(void)
{
	double_t act = -0.0;
	TEST_ASSERT_DOUBLE_IS_NOT_NEG_INF(act);
}

void test_assertion_float_nan(void)
{
	float_t act = 0.0f / 0.0f;
	TEST_ASSERT_FLOAT_IS_NAN(act);
}

void test_assertion_double_nan(void)
{
	double_t act = 0.0 / 0.0;
	TEST_ASSERT_DOUBLE_IS_NAN(act);
}

void test_assertion_float_not_nan(void)
{
	float_t act = 0.0f;
	TEST_ASSERT_FLOAT_IS_NOT_NAN(act);
}

void test_assertion_double_not_nan(void)
{
	double_t act = 0.0;
	TEST_ASSERT_DOUBLE_IS_NOT_NAN(act);
}


void test_assertion_float_determinate(void)
{
	float_t act = 0.0f;
	TEST_ASSERT_FLOAT_IS_DETERMINATE(act);
}

void test_assertion_double_determinate(void)
{
	double_t act = 0.0;
	TEST_ASSERT_DOUBLE_IS_DETERMINATE(act);
}

void test_assertion_float_non_determinate(void)
{
	float_t act = INFINITY;
	TEST_ASSERT_FLOAT_IS_NOT_DETERMINATE(act);
}

void test_assertion_double_non_determinate(void)
{
	double_t act = INFINITY;
	TEST_ASSERT_DOUBLE_IS_NOT_DETERMINATE(act);
}

void test_assertion_masked_bits_match(void)
{
	int32_t mask = 0b00001111;
	int32_t exp = 0b10101111;
	int32_t act = 0b00001111;

	TEST_ASSERT_BITS(mask, act, mask & act);
}

void test_assertion_masked_bits_high(void)
{
	int32_t mask = 0b10000001;
	int32_t act = 0b10101111;

	TEST_ASSERT_BITS_HIGH(mask, act);
}

void test_assertion_masked_bits_low(void)
{
	int32_t mask = 0b01010000;
	int32_t act = 0b10101111;

	TEST_ASSERT_BITS_LOW(mask, act);
}

void test_assertion_masked_bit_high(void)
{
	int32_t bit = 0;
	int32_t act = 0b10101111;

	TEST_ASSERT_BIT_HIGH(bit, act);
}

void test_assertion_masked_bit_low(void)
{
	int32_t bit = 4;
	int32_t act = 0b10101111;

	TEST_ASSERT_BIT_LOW(bit, act);
}


void test_assertion_int32_range(void)
{
	int32_t delta = 128;
	int32_t exp = 256;
	int32_t act = exp + delta;

	TEST_ASSERT_UINT32_WITHIN(delta, exp, act);
}

void test_assertion_uint32_range(void)
{
	uint32_t delta = 128;
	uint32_t exp = 256;
	uint32_t act = exp + delta;

	TEST_ASSERT_UINT32_WITHIN(delta, exp, act);
}

void test_assertion_float_range(void)
{
	float_t delta = 128.000f;
	float_t exp = 256.000f;
	float_t act = exp + delta;

	TEST_ASSERT_FLOAT_WITHIN(delta, exp, act);
}

void test_assertion_double_range(void)
{
	double_t delta = 128.000f;
	double_t exp = 256.000f;
	double_t act = exp + delta;

	TEST_ASSERT_DOUBLE_WITHIN(delta, exp, act);
}

void test_assertion_hex32_range(void)
{
	int32_t delta = 0x80u;
	int32_t exp = 0x100u;
	int32_t act = exp + delta;

	TEST_ASSERT_HEX32_WITHIN(delta, exp, act);
}

void test_assertion_equal_ptr(void)
{
	int32_t value = 128;
	int32_t *exp = &value;
	int32_t *act = &(*exp);

	TEST_ASSERT_EQUAL_PTR(exp, act);
}

void test_assertion_equal_string(void)
{
	char exp[] = "assert";
	char act[] = "assert";

	TEST_ASSERT_EQUAL_STRING(exp, act);
}

void test_assertion_equal_memory_block(void)
{
	int32_t len = 32;
	int32_t *exp = malloc(len * sizeof(int));
	int32_t *act = &(*exp);

	TEST_ASSERT_EQUAL_MEMORY(exp, act, len);
	free(act);
}

void test_assertion_equal_int32_array(void)
{
	const int32_t LENGTH = 10;

	int32_t exp[] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
	int32_t act[] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
	
	TEST_ASSERT_EQUAL_INT32_ARRAY(exp, act, LENGTH);
}

void test_assertion_equal_uint32_array(void)
{
	const int32_t LENGTH = 10;

	uint32_t exp[] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
	uint32_t act[] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

	TEST_ASSERT_EQUAL_INT32_ARRAY(exp, act, LENGTH);
}

void test_assertion_equal_hex32_array(void)
{
	const int32_t LENGTH = 10;

	uint32_t exp[] = { 0x1, 0x2, 0x4, 0x8, 0x10, 0x20, 0x40, 0x80, 0x100, 0x200 };
	uint32_t act[] = { 0x1, 0x2, 0x4, 0x8, 0x10, 0x20, 0x40, 0x80, 0x100, 0x200 };

	TEST_ASSERT_EQUAL_HEX32_ARRAY(exp, act, LENGTH);
}

void test_assertion_equal_float_array(void)
{
	const int32_t LENGTH = 10;

	float_t exp[] = { 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f };
	float_t act[] = { 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f };

	TEST_ASSERT_EQUAL_FLOAT_ARRAY(exp, act, LENGTH);
}

void test_assertion_equal_double_array(void)
{
	const int32_t LENGTH = 10;

	double_t exp[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0 };
	double_t act[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0 };

	TEST_ASSERT_EQUAL_DOUBLE_ARRAY(exp, act, LENGTH);
}

void test_assertion_equal_ptr_array(void)
{
	const int32_t LENGTH = 10;

	int32_t exp[] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
	int32_t *act = &exp[0];

	TEST_ASSERT_EQUAL_PTR_ARRAY(&exp[0], act, LENGTH);
}

void test_assertion_equal_string_array(void)
{
	char *exp[] = { "assert1", "assert2", "assert3" };
	char *act[] = { "assert1", "assert2", "assert3" };

	TEST_ASSERT_EQUAL_STRING_ARRAY(&exp, act, 3);
}

void test_assertion_equal_memory_block_array(void)
{
	const int32_t LENGTH = 32;
	const int32_t BLOCKS = 4;

	int32_t* exp = malloc(LENGTH * BLOCKS * sizeof(int));
	int32_t* act = &(*exp);

	TEST_ASSERT_EQUAL_MEMORY_ARRAY(exp, act, LENGTH, BLOCKS);

	free(act);
}