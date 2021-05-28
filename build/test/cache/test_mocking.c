#include "build/test/mocks/mock_module_a.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.0/vendor/unity/src/unity.h"












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



 init_Stub(&init_stub);

 reset_Stub(&reset_stub);

 divide_by_half_Stub(&dbh_stub);

 multiply_by_two_Stub(&mbt_stub);

 power_of_two_Stub(&pot_stub);

 square_root_Stub(&sqr_stub);











 init();

}





void tearDown(void)

{

 reset();

}





void test_mock_assertion_int32_equal(void)

{

 int32_t exp = 128;

 UnityAssertEqualNumber((UNITY_INT)(UNITY_INT32)((exp)), (UNITY_INT)(UNITY_INT32)(((int32_t)divide_by_half((int32_t)multiply_by_two(exp)))), (

((void *)0)

), (UNITY_UINT)(61), UNITY_DISPLAY_STYLE_INT32);

 UnityAssertEqualNumber((UNITY_INT)(UNITY_INT32)((exp)), (UNITY_INT)(UNITY_INT32)(((int32_t)square_root((int32_t)power_of_two(exp)))), (

((void *)0)

), (UNITY_UINT)(62), UNITY_DISPLAY_STYLE_INT32);

}



void test_mock_assertion_uint32_equal(void)

{

 uint32_t exp = 128;

 UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((exp)), (UNITY_INT)(UNITY_UINT32)(((uint32_t)divide_by_half((uint32_t)multiply_by_two(exp)))), (

((void *)0)

), (UNITY_UINT)(68), UNITY_DISPLAY_STYLE_UINT32);

 UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT32)((exp)), (UNITY_INT)(UNITY_UINT32)(((uint32_t)square_root((uint32_t)power_of_two(exp)))), (

((void *)0)

), (UNITY_UINT)(69), UNITY_DISPLAY_STYLE_UINT32);

}



void test_mock_assertion_hex32_equal(void)

{

 int32_t exp = 0x00000800u;

 UnityAssertEqualNumber((UNITY_INT)(UNITY_INT32)((exp)), (UNITY_INT)(UNITY_INT32)(((int32_t)divide_by_half((int32_t)multiply_by_two(exp)))), (

((void *)0)

), (UNITY_UINT)(75), UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((UNITY_INT)(UNITY_INT32)((exp)), (UNITY_INT)(UNITY_INT32)(((int32_t)square_root((int32_t)power_of_two(exp)))), (

((void *)0)

), (UNITY_UINT)(76), UNITY_DISPLAY_STYLE_HEX32);

}



void test_mock_assertion_float_equal(void)

{

 float_t exp = 128.000f;

 UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((exp)) * (UNITY_FLOAT)0.001f), (UNITY_FLOAT)((UNITY_FLOAT)((exp))), (UNITY_FLOAT)((UNITY_FLOAT)(((float_t)divide_by_half((float_t)multiply_by_two(exp))))), ((

((void *)0)

)), (UNITY_UINT)((UNITY_UINT)(82)));

 UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((exp)) * (UNITY_FLOAT)0.001f), (UNITY_FLOAT)((UNITY_FLOAT)((exp))), (UNITY_FLOAT)((UNITY_FLOAT)(((float_t)square_root((float_t)power_of_two(exp))))), ((

((void *)0)

)), (UNITY_UINT)((UNITY_UINT)(83)));

}



void test_mock_assertion_double_equal(void)

{

 double_t exp = 128.000f;

 UnityAssertDoublesWithin((UNITY_DOUBLE)((UNITY_DOUBLE)((exp)) * (UNITY_DOUBLE)0.001f), (UNITY_DOUBLE)((UNITY_DOUBLE)((exp))), (UNITY_DOUBLE)((UNITY_DOUBLE)(((double_t)divide_by_half((double_t)multiply_by_two(exp))))), ((

((void *)0)

)), (UNITY_UINT)((UNITY_UINT)(89)));

 UnityAssertDoublesWithin((UNITY_DOUBLE)((UNITY_DOUBLE)((exp)) * (UNITY_DOUBLE)0.001f), (UNITY_DOUBLE)((UNITY_DOUBLE)((exp))), (UNITY_DOUBLE)((UNITY_DOUBLE)(((double_t)square_root((double_t)power_of_two(exp))))), ((

((void *)0)

)), (UNITY_UINT)((UNITY_UINT)(90)));

}
