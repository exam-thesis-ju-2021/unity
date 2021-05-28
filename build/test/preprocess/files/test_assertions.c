#include "src/library/peripherals/square_root.h"
#include "src/library/peripherals/power_of_two.h"
#include "src/library/peripherals/multiply_by_two.h"
#include "src/library/peripherals/divide_by_half.h"
#include "src/library/peripheral.h"
#include "src/library/hardware.h"
#include "src/library/peripherals.h"
#include "src/library/module_a.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.0/vendor/unity/src/unity.h"








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

 

_Bool 

     act = (

            ((void *)0) 

                 == 

                    ((void *)0)

                        );

 do {if ((act)) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(27)));}} while(0);

}



void test_assertion_boolean_false(void)

{

 

_Bool 

     act = (

            ((void *)0) 

                 != 

                    ((void *)0)

                        );

 do {if (!(act)) {} else {UnityFail( ((" Expected FALSE Was TRUE")), (UNITY_UINT)((UNITY_UINT)(33)));}} while(0);

}



void test_assert_null(void)

{

 int32_t* act = 

               ((void *)0)

                   ;

 do {if ((((act)) == 

((void *)0)

)) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(39))));}} while(0);

}



void test_assert_not_null(void)

{

 int32_t act = 128;

 do {if ((((&act)) != 

((void *)0)

)) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(45))));}} while(0);

}



void test_assertion_int32_equal(void)

{

 int32_t exp = 128;

 UnityAssertEqualNumber((UNITY_INT)(UNITY_INT32)((exp)), (UNITY_INT)(UNITY_INT32)(((int32_t)divide_by_half((int32_t)multiply_by_two(exp)))), (

((void *)0)

), (UNITY_UINT)(51), UNITY_DISPLAY_STYLE_INT32);

 UnityAssertEqualNumber((UNITY_INT)(UNITY_INT32)((exp)), (UNITY_INT)(UNITY_INT32)(((int32_t)square_root((int32_t)power_of_two(exp)))), (

((void *)0)

), (UNITY_UINT)(52), UNITY_DISPLAY_STYLE_INT32);

}



void test_assertion_uint32_equal(void)

{

 uint32_t exp = 128;

 UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((exp)), (UNITY_INT)(UNITY_UINT32)(((uint32_t)divide_by_half((uint32_t)multiply_by_two(exp)))), (

((void *)0)

), (UNITY_UINT)(58), UNITY_DISPLAY_STYLE_UINT32);

 UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((exp)), (UNITY_INT)(UNITY_UINT32)(((uint32_t)square_root((uint32_t)power_of_two(exp)))), (

((void *)0)

), (UNITY_UINT)(59), UNITY_DISPLAY_STYLE_UINT32);

}



void test_assertion_hex32_equal(void)

{

 int32_t exp = 0x00000800u;

 UnityAssertEqualNumber((UNITY_INT)(UNITY_INT32)((exp)), (UNITY_INT)(UNITY_INT32)(((int32_t)divide_by_half((int32_t)multiply_by_two(exp)))), (

((void *)0)

), (UNITY_UINT)(65), UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((UNITY_INT)(UNITY_INT32)((exp)), (UNITY_INT)(UNITY_INT32)(((int32_t)square_root((int32_t)power_of_two(exp)))), (

((void *)0)

), (UNITY_UINT)(66), UNITY_DISPLAY_STYLE_HEX32);

}



void test_assertion_float_equal(void)

{

 float_t exp = 128.000f;

 UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((exp)) * (UNITY_FLOAT)0.001f), (UNITY_FLOAT)((UNITY_FLOAT)((exp))), (UNITY_FLOAT)((UNITY_FLOAT)(((float_t)divide_by_half((float_t)multiply_by_two(exp))))), ((

((void *)0)

)), (UNITY_UINT)((UNITY_UINT)(72)));

 UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((exp)) * (UNITY_FLOAT)0.001f), (UNITY_FLOAT)((UNITY_FLOAT)((exp))), (UNITY_FLOAT)((UNITY_FLOAT)(((float_t)square_root((float_t)power_of_two(exp))))), ((

((void *)0)

)), (UNITY_UINT)((UNITY_UINT)(73)));

}



void test_assertion_double_equal(void)

{

 double_t exp = 128.000;

 UnityAssertDoublesWithin((UNITY_DOUBLE)((UNITY_DOUBLE)((exp)) * (UNITY_DOUBLE)0.001f), (UNITY_DOUBLE)((UNITY_DOUBLE)((exp))), (UNITY_DOUBLE)((UNITY_DOUBLE)(((double_t)divide_by_half((double_t)multiply_by_two(exp))))), ((

((void *)0)

)), (UNITY_UINT)((UNITY_UINT)(79)));

 UnityAssertDoublesWithin((UNITY_DOUBLE)((UNITY_DOUBLE)((exp)) * (UNITY_DOUBLE)0.001f), (UNITY_DOUBLE)((UNITY_DOUBLE)((exp))), (UNITY_DOUBLE)((UNITY_DOUBLE)(((double_t)square_root((double_t)power_of_two(exp))))), ((

((void *)0)

)), (UNITY_UINT)((UNITY_UINT)(80)));

}



void test_assertion_float_infinity(void)

{

 float_t act = 

              __builtin_inf()

                      ;

 UnityAssertFloatSpecial((UNITY_FLOAT)((act)), (

((void *)0)

), (UNITY_UINT)(86), UNITY_FLOAT_IS_INF);

}



void test_assertion_double_infinity(void)

{

 double_t act = 

               __builtin_inf()

                       ;

 UnityAssertDoubleSpecial((UNITY_DOUBLE)((act)), (

((void *)0)

), (UNITY_UINT)(92), UNITY_FLOAT_IS_INF);

}



void test_assertion_float_not_infinity(void)

{

 float_t act = 0.0f;

 UnityAssertFloatSpecial((UNITY_FLOAT)((act)), (

((void *)0)

), (UNITY_UINT)(98), UNITY_FLOAT_IS_NOT_INF);

}



void test_assertion_double_not_infinity(void)

{

 double_t act = 0.0;

 UnityAssertDoubleSpecial((UNITY_DOUBLE)((act)), (

((void *)0)

), (UNITY_UINT)(104), UNITY_FLOAT_IS_NOT_INF);

}



void test_assertion_float_negative_infinity(void)

{

 float_t act = -

               __builtin_inf()

                       ;

 UnityAssertFloatSpecial((UNITY_FLOAT)((act)), (

((void *)0)

), (UNITY_UINT)(110), UNITY_FLOAT_IS_NEG_INF);

}



void test_assertion_double_negative_infinity(void)

{

 double_t act = -

                __builtin_inf()

                        ;

 UnityAssertDoubleSpecial((UNITY_DOUBLE)((act)), (

((void *)0)

), (UNITY_UINT)(116), UNITY_FLOAT_IS_NEG_INF);

}



void test_assertion_float_not_negative_infinity(void)

{

 float_t act = -0.0f;

 UnityAssertFloatSpecial((UNITY_FLOAT)((act)), (

((void *)0)

), (UNITY_UINT)(122), UNITY_FLOAT_IS_NOT_NEG_INF);

}



void test_assertion_double_not_negative_infinity(void)

{

 double_t act = -0.0;

 UnityAssertDoubleSpecial((UNITY_DOUBLE)((act)), (

((void *)0)

), (UNITY_UINT)(128), UNITY_FLOAT_IS_NOT_NEG_INF);

}



void test_assertion_float_nan(void)

{

 float_t divider = 0.0f;

 float_t act = 0.0f / divider;

 UnityAssertFloatSpecial((UNITY_FLOAT)((act)), (

((void *)0)

), (UNITY_UINT)(135), UNITY_FLOAT_IS_NAN);

}



void test_assertion_double_nan(void)

{

 double_t divider = 0.0;

 double_t act = 0.0 / divider;

 UnityAssertDoubleSpecial((UNITY_DOUBLE)((act)), (

((void *)0)

), (UNITY_UINT)(142), UNITY_FLOAT_IS_NAN);

}



void test_assertion_float_not_nan(void)

{

 float_t act = 0.0f;

 UnityAssertFloatSpecial((UNITY_FLOAT)((act)), (

((void *)0)

), (UNITY_UINT)(148), UNITY_FLOAT_IS_NOT_NAN);

}



void test_assertion_double_not_nan(void)

{

 double_t act = 0.0;

 UnityAssertDoubleSpecial((UNITY_DOUBLE)((act)), (

((void *)0)

), (UNITY_UINT)(154), UNITY_FLOAT_IS_NOT_NAN);

}





void test_assertion_float_determinate(void)

{

 float_t act = 0.0f;

 UnityAssertFloatSpecial((UNITY_FLOAT)((act)), (

((void *)0)

), (UNITY_UINT)(161), UNITY_FLOAT_IS_DET);

}



void test_assertion_double_determinate(void)

{

 double_t act = 0.0;

 UnityAssertDoubleSpecial((UNITY_DOUBLE)((act)), (

((void *)0)

), (UNITY_UINT)(167), UNITY_FLOAT_IS_DET);

}



void test_assertion_float_non_determinate(void)

{

 float_t act = 

              __builtin_inf()

                      ;

 UnityAssertFloatSpecial((UNITY_FLOAT)((act)), (

((void *)0)

), (UNITY_UINT)(173), UNITY_FLOAT_IS_NOT_DET);

}



void test_assertion_double_non_determinate(void)

{

 double_t act = 

               __builtin_inf()

                       ;

 UnityAssertDoubleSpecial((UNITY_DOUBLE)((act)), (

((void *)0)

), (UNITY_UINT)(179), UNITY_FLOAT_IS_NOT_DET);

}



void test_assertion_masked_bits_match(void)

{

 int32_t mask = 0b00001111;

 int32_t exp = 0b10101111;

 int32_t act = 0b01011111;



 UnityAssertBits((UNITY_INT)((mask)), (UNITY_INT)((exp)), (UNITY_INT)((act)), (

((void *)0)

), (UNITY_UINT)(188));

}



void test_assertion_masked_bits_high(void)

{

 int32_t mask = 0b00001111;

 int32_t exp = 0b10101111;

 int32_t act = 0b01011111;



 UnityAssertBits((UNITY_INT)((mask)), (UNITY_INT)((UNITY_UINT)(-1)), (UNITY_INT)((act)), (

((void *)0)

), (UNITY_UINT)(197));

}



void test_assertion_masked_bits_low(void)

{

 int32_t mask = 0b00001111;

 int32_t exp = 0b10100000;

 int32_t act = 0b10100000;



 UnityAssertBits((UNITY_INT)((mask)), (UNITY_INT)((UNITY_UINT)(0)), (UNITY_INT)((act)), (

((void *)0)

), (UNITY_UINT)(206));

}



void test_assertion_masked_bit_high(void)

{

 int32_t mask = 0b10000000;



 int32_t bit = 7;

 int32_t exp = 0b00000000;

 exp ^= 1UL << bit;



 int32_t act = 0b10000000;



 UnityAssertBits((UNITY_INT)(((UNITY_UINT)1 << (bit))), (UNITY_INT)((UNITY_UINT)(-1)), (UNITY_INT)((act)), (

((void *)0)

), (UNITY_UINT)(219));

}



void test_assertion_masked_bit_low(void)

{

 int32_t mask = 0b10000000;



 int32_t bit = 7;

 int32_t exp = 0b11111111;

 exp &= ~(1UL << bit);



 int32_t act = 0b01111111;



 UnityAssertBits((UNITY_INT)(((UNITY_UINT)1 << (bit))), (UNITY_INT)((UNITY_UINT)(0)), (UNITY_INT)((act)), (

((void *)0)

), (UNITY_UINT)(232));

}





void test_assertion_int32_range(void)

{

 int32_t delta = 128;

 int32_t exp = 256;

 int32_t act = exp + delta;



 UnityAssertNumbersWithin((UNITY_UINT32)((delta)), (UNITY_INT)(UNITY_UINT)(UNITY_UINT32)((exp)), (UNITY_INT)(UNITY_UINT)(UNITY_UINT32)((act)), (

((void *)0)

), (UNITY_UINT)(242), UNITY_DISPLAY_STYLE_UINT32);

}



void test_assertion_uint32_range(void)

{

 uint32_t delta = 128;

 uint32_t exp = 256;

 uint32_t act = exp + delta;



 UnityAssertNumbersWithin((UNITY_UINT32)((delta)), (UNITY_INT)(UNITY_UINT)(UNITY_UINT32)((exp)), (UNITY_INT)(UNITY_UINT)(UNITY_UINT32)((act)), (

((void *)0)

), (UNITY_UINT)(251), UNITY_DISPLAY_STYLE_UINT32);

}



void test_assertion_float_range(void)

{

 float_t delta = 128.000f;

 float_t exp = 256.000f;

 float_t act = exp + delta;



 UnityAssertFloatsWithin((UNITY_FLOAT)((delta)), (UNITY_FLOAT)((exp)), (UNITY_FLOAT)((act)), (

((void *)0)

), (UNITY_UINT)(260));

}



void test_assertion_double_range(void)

{

 double_t delta = 128.000;

 double_t exp = 256.000;

 double_t act = exp + delta;



 UnityAssertDoublesWithin((UNITY_DOUBLE)((delta)), (UNITY_DOUBLE)((exp)), (UNITY_DOUBLE)((act)), (

((void *)0)

), (UNITY_UINT)(269));

}



void test_assertion_hex32_range(void)

{

 int32_t delta = 0x80u;

 int32_t exp = 0x100u;

 int32_t act = exp + delta;



 UnityAssertNumbersWithin((UNITY_UINT32)((delta)), (UNITY_INT)(UNITY_UINT)(UNITY_UINT32)((exp)), (UNITY_INT)(UNITY_UINT)(UNITY_UINT32)((act)), (

((void *)0)

), (UNITY_UINT)(278), UNITY_DISPLAY_STYLE_HEX32);

}



void test_assertion_equal_ptr(void)

{

 int32_t value = 128;

 int32_t *exp = &value;

 int32_t *act = &*exp;



 UnityAssertEqualNumber((UNITY_INT32)((exp)), (UNITY_INT32)((act)), (

((void *)0)

), (UNITY_UINT)(287), UNITY_DISPLAY_STYLE_HEX32);

}



void test_assertion_equal_string(void)

{

 char exp[] = "assert";

 char act[] = "assert";



 UnityAssertEqualString((const char*)((exp)), (const char*)((act)), (

((void *)0)

), (UNITY_UINT)(295));

}



void test_assertion_equal_memory_block(void)

{

 const int32_t LENGTH = 10;

 int32_t* exp = (int32_t*)malloc(LENGTH * sizeof(int));



 if (!exp) {

  UnityFail( (("Failed to allocate memory for 'int32_t* exp'")), (UNITY_UINT)(304));

  return;

 }



 int32_t *act = &*exp;

 UnityAssertEqualMemory(( const void*)((exp)), ( const void*)((act)), (UNITY_UINT32)((LENGTH)), 1, (

((void *)0)

), (UNITY_UINT)(309), UNITY_ARRAY_TO_ARRAY);

 free(act);

}



void test_assertion_equal_int32_array(void)

{

 const int32_t LENGTH = 10;



 int32_t exp[] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

 int32_t act[] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };



 UnityAssertEqualIntArray(( const void*)((exp)), ( const void*)((act)), (UNITY_UINT32)((LENGTH)), (

((void *)0)

), (UNITY_UINT)(320), UNITY_DISPLAY_STYLE_INT32, UNITY_ARRAY_TO_ARRAY);

}



void test_assertion_equal_uint32_array(void)

{

 const int32_t LENGTH = 10;



 uint32_t exp[] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

 uint32_t act[] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };



 UnityAssertEqualIntArray(( const void*)((exp)), ( const void*)((act)), (UNITY_UINT32)((LENGTH)), (

((void *)0)

), (UNITY_UINT)(330), UNITY_DISPLAY_STYLE_UINT32, UNITY_ARRAY_TO_ARRAY);

}



void test_assertion_equal_hex32_array(void)

{

 const int32_t LENGTH = 10;



 uint32_t exp[] = { 0x1, 0x2, 0x4, 0x8, 0x10, 0x20, 0x40, 0x80, 0x100, 0x200 };

 uint32_t act[] = { 0x1, 0x2, 0x4, 0x8, 0x10, 0x20, 0x40, 0x80, 0x100, 0x200 };



 UnityAssertEqualIntArray(( const void*)((exp)), ( const void*)((act)), (UNITY_UINT32)((LENGTH)), (

((void *)0)

), (UNITY_UINT)(340), UNITY_DISPLAY_STYLE_HEX32, UNITY_ARRAY_TO_ARRAY);

}



void test_assertion_equal_float_array(void)

{

 const int32_t LENGTH = 10;



 float_t exp[] = { 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f };

 float_t act[] = { 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f };



 UnityAssertEqualFloatArray((UNITY_FLOAT*)((exp)), (UNITY_FLOAT*)((act)), (UNITY_UINT32)((LENGTH)), (

((void *)0)

), (UNITY_UINT)(350), UNITY_ARRAY_TO_ARRAY);

}



void test_assertion_equal_double_array(void)

{

 const int32_t LENGTH = 10;



 double_t exp[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0 };

 double_t act[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0 };



 UnityAssertEqualDoubleArray((UNITY_DOUBLE*)((exp)), (UNITY_DOUBLE*)((act)), (UNITY_UINT32)((LENGTH)), (

((void *)0)

), (UNITY_UINT)(360), UNITY_ARRAY_TO_ARRAY);

}



void test_assertion_equal_ptr_array(void)

{

 const int32_t LENGTH = 10;



 int32_t exp[] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

 int32_t *act = &exp[0];



 UnityAssertEqualIntArray(( const void*)((&exp[0])), ( const void*)((act)), (UNITY_UINT32)((LENGTH)), (

((void *)0)

), (UNITY_UINT)(370), UNITY_DISPLAY_STYLE_HEX32, UNITY_ARRAY_TO_ARRAY);

}



void test_assertion_equal_string_array(void)

{

 const int32_t LENGTH = 3;



 char *exp[] = { "assert1", "assert2", "assert3" };

 char *act[] = { "assert1", "assert2", "assert3" };



 UnityAssertEqualStringArray(( const void*)((&exp)), (const char**)((act)), (UNITY_UINT32)((LENGTH)), (

((void *)0)

), (UNITY_UINT)(380), UNITY_ARRAY_TO_ARRAY);

}



void test_assertion_equal_memory_block_array(void)

{

 const int32_t LENGTH = 32;

 const int32_t BLOCKS = 4;



 int32_t* exp = (int32_t*)malloc(LENGTH * BLOCKS * sizeof(int32_t));



 if (!exp) {

  UnityFail( (("Failed to allocate memory for 'int32_t* exp'")), (UNITY_UINT)(391));

  return;

 }



 int32_t* act = &*exp;

 UnityAssertEqualMemory(( const void*)((exp)), ( const void*)((act)), (UNITY_UINT32)((LENGTH)), (UNITY_UINT32)((BLOCKS)), (

((void *)0)

), (UNITY_UINT)(396), UNITY_ARRAY_TO_ARRAY);

 free(act);

}
