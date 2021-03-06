/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_MODULE_A_H
#define _MOCK_MODULE_A_H

#include "unity.h"
#include "module_a.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_module_a_Init(void);
void mock_module_a_Destroy(void);
void mock_module_a_Verify(void);




#define init_Ignore() init_CMockIgnore()
void init_CMockIgnore(void);
#define init_StopIgnore() init_CMockStopIgnore()
void init_CMockStopIgnore(void);
#define init_Expect() init_CMockExpect(__LINE__)
void init_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_init_CALLBACK)(int cmock_num_calls);
void init_AddCallback(CMOCK_init_CALLBACK Callback);
void init_Stub(CMOCK_init_CALLBACK Callback);
#define init_StubWithCallback init_Stub
#define reset_Ignore() reset_CMockIgnore()
void reset_CMockIgnore(void);
#define reset_StopIgnore() reset_CMockStopIgnore()
void reset_CMockStopIgnore(void);
#define reset_Expect() reset_CMockExpect(__LINE__)
void reset_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_reset_CALLBACK)(int cmock_num_calls);
void reset_AddCallback(CMOCK_reset_CALLBACK Callback);
void reset_Stub(CMOCK_reset_CALLBACK Callback);
#define reset_StubWithCallback reset_Stub
#define divide_by_half_IgnoreAndReturn(cmock_retval) divide_by_half_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void divide_by_half_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, double cmock_to_return);
#define divide_by_half_StopIgnore() divide_by_half_CMockStopIgnore()
void divide_by_half_CMockStopIgnore(void);
#define divide_by_half_ExpectAndReturn(value, cmock_retval) divide_by_half_CMockExpectAndReturn(__LINE__, value, cmock_retval)
void divide_by_half_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, double value, double cmock_to_return);
typedef double (* CMOCK_divide_by_half_CALLBACK)(double value, int cmock_num_calls);
void divide_by_half_AddCallback(CMOCK_divide_by_half_CALLBACK Callback);
void divide_by_half_Stub(CMOCK_divide_by_half_CALLBACK Callback);
#define divide_by_half_StubWithCallback divide_by_half_Stub
#define multiply_by_two_IgnoreAndReturn(cmock_retval) multiply_by_two_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void multiply_by_two_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, double cmock_to_return);
#define multiply_by_two_StopIgnore() multiply_by_two_CMockStopIgnore()
void multiply_by_two_CMockStopIgnore(void);
#define multiply_by_two_ExpectAndReturn(value, cmock_retval) multiply_by_two_CMockExpectAndReturn(__LINE__, value, cmock_retval)
void multiply_by_two_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, double value, double cmock_to_return);
typedef double (* CMOCK_multiply_by_two_CALLBACK)(double value, int cmock_num_calls);
void multiply_by_two_AddCallback(CMOCK_multiply_by_two_CALLBACK Callback);
void multiply_by_two_Stub(CMOCK_multiply_by_two_CALLBACK Callback);
#define multiply_by_two_StubWithCallback multiply_by_two_Stub
#define power_of_two_IgnoreAndReturn(cmock_retval) power_of_two_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void power_of_two_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, double cmock_to_return);
#define power_of_two_StopIgnore() power_of_two_CMockStopIgnore()
void power_of_two_CMockStopIgnore(void);
#define power_of_two_ExpectAndReturn(value, cmock_retval) power_of_two_CMockExpectAndReturn(__LINE__, value, cmock_retval)
void power_of_two_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, double value, double cmock_to_return);
typedef double (* CMOCK_power_of_two_CALLBACK)(double value, int cmock_num_calls);
void power_of_two_AddCallback(CMOCK_power_of_two_CALLBACK Callback);
void power_of_two_Stub(CMOCK_power_of_two_CALLBACK Callback);
#define power_of_two_StubWithCallback power_of_two_Stub
#define square_root_IgnoreAndReturn(cmock_retval) square_root_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void square_root_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, double cmock_to_return);
#define square_root_StopIgnore() square_root_CMockStopIgnore()
void square_root_CMockStopIgnore(void);
#define square_root_ExpectAndReturn(value, cmock_retval) square_root_CMockExpectAndReturn(__LINE__, value, cmock_retval)
void square_root_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, double value, double cmock_to_return);
typedef double (* CMOCK_square_root_CALLBACK)(double value, int cmock_num_calls);
void square_root_AddCallback(CMOCK_square_root_CALLBACK Callback);
void square_root_Stub(CMOCK_square_root_CALLBACK Callback);
#define square_root_StubWithCallback square_root_Stub

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
