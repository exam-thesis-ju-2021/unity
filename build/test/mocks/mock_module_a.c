/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "mock_module_a.h"

static const char* CMockString_divide_by_half = "divide_by_half";
static const char* CMockString_init = "init";
static const char* CMockString_multiply_by_two = "multiply_by_two";
static const char* CMockString_power_of_two = "power_of_two";
static const char* CMockString_reset = "reset";
static const char* CMockString_square_root = "square_root";
static const char* CMockString_value = "value";

typedef struct _CMOCK_init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;

} CMOCK_init_CALL_INSTANCE;

typedef struct _CMOCK_reset_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;

} CMOCK_reset_CALL_INSTANCE;

typedef struct _CMOCK_divide_by_half_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  double ReturnVal;
  int CallOrder;
  double Expected_value;

} CMOCK_divide_by_half_CALL_INSTANCE;

typedef struct _CMOCK_multiply_by_two_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  double ReturnVal;
  int CallOrder;
  double Expected_value;

} CMOCK_multiply_by_two_CALL_INSTANCE;

typedef struct _CMOCK_power_of_two_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  double ReturnVal;
  int CallOrder;
  double Expected_value;

} CMOCK_power_of_two_CALL_INSTANCE;

typedef struct _CMOCK_square_root_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  double ReturnVal;
  int CallOrder;
  double Expected_value;

} CMOCK_square_root_CALL_INSTANCE;

static struct mock_module_aInstance
{
  char init_IgnoreBool;
  char init_CallbackBool;
  CMOCK_init_CALLBACK init_CallbackFunctionPointer;
  int init_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE init_CallInstance;
  char reset_IgnoreBool;
  char reset_CallbackBool;
  CMOCK_reset_CALLBACK reset_CallbackFunctionPointer;
  int reset_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE reset_CallInstance;
  char divide_by_half_IgnoreBool;
  double divide_by_half_FinalReturn;
  char divide_by_half_CallbackBool;
  CMOCK_divide_by_half_CALLBACK divide_by_half_CallbackFunctionPointer;
  int divide_by_half_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE divide_by_half_CallInstance;
  char multiply_by_two_IgnoreBool;
  double multiply_by_two_FinalReturn;
  char multiply_by_two_CallbackBool;
  CMOCK_multiply_by_two_CALLBACK multiply_by_two_CallbackFunctionPointer;
  int multiply_by_two_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE multiply_by_two_CallInstance;
  char power_of_two_IgnoreBool;
  double power_of_two_FinalReturn;
  char power_of_two_CallbackBool;
  CMOCK_power_of_two_CALLBACK power_of_two_CallbackFunctionPointer;
  int power_of_two_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE power_of_two_CallInstance;
  char square_root_IgnoreBool;
  double square_root_FinalReturn;
  char square_root_CallbackBool;
  CMOCK_square_root_CALLBACK square_root_CallbackFunctionPointer;
  int square_root_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE square_root_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_module_a_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.init_CallInstance;
  if (Mock.init_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_init);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.init_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.reset_CallInstance;
  if (Mock.reset_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_reset);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.reset_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.divide_by_half_CallInstance;
  if (Mock.divide_by_half_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_divide_by_half);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.divide_by_half_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.multiply_by_two_CallInstance;
  if (Mock.multiply_by_two_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_multiply_by_two);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.multiply_by_two_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.power_of_two_CallInstance;
  if (Mock.power_of_two_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_power_of_two);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.power_of_two_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.square_root_CallInstance;
  if (Mock.square_root_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_square_root);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.square_root_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
}

void mock_module_a_Init(void)
{
  mock_module_a_Destroy();
}

void mock_module_a_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

void init(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_init_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_init);
  cmock_call_instance = (CMOCK_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.init_CallInstance);
  Mock.init_CallInstance = CMock_Guts_MemNext(Mock.init_CallInstance);
  if (Mock.init_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.init_CallbackBool &&
      Mock.init_CallbackFunctionPointer != NULL)
  {
    Mock.init_CallbackFunctionPointer(Mock.init_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  if (Mock.init_CallbackFunctionPointer != NULL)
  {
    Mock.init_CallbackFunctionPointer(Mock.init_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void init_CMockIgnore(void)
{
  Mock.init_IgnoreBool = (char)1;
}

void init_CMockStopIgnore(void)
{
  Mock.init_IgnoreBool = (char)0;
}

void init_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_init_CALL_INSTANCE));
  CMOCK_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.init_CallInstance = CMock_Guts_MemChain(Mock.init_CallInstance, cmock_guts_index);
  Mock.init_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
}

void init_AddCallback(CMOCK_init_CALLBACK Callback)
{
  Mock.init_IgnoreBool = (char)0;
  Mock.init_CallbackBool = (char)1;
  Mock.init_CallbackFunctionPointer = Callback;
}

void init_Stub(CMOCK_init_CALLBACK Callback)
{
  Mock.init_IgnoreBool = (char)0;
  Mock.init_CallbackBool = (char)0;
  Mock.init_CallbackFunctionPointer = Callback;
}

void reset(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_reset_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_reset);
  cmock_call_instance = (CMOCK_reset_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.reset_CallInstance);
  Mock.reset_CallInstance = CMock_Guts_MemNext(Mock.reset_CallInstance);
  if (Mock.reset_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.reset_CallbackBool &&
      Mock.reset_CallbackFunctionPointer != NULL)
  {
    Mock.reset_CallbackFunctionPointer(Mock.reset_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  if (Mock.reset_CallbackFunctionPointer != NULL)
  {
    Mock.reset_CallbackFunctionPointer(Mock.reset_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void reset_CMockIgnore(void)
{
  Mock.reset_IgnoreBool = (char)1;
}

void reset_CMockStopIgnore(void)
{
  Mock.reset_IgnoreBool = (char)0;
}

void reset_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_reset_CALL_INSTANCE));
  CMOCK_reset_CALL_INSTANCE* cmock_call_instance = (CMOCK_reset_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.reset_CallInstance = CMock_Guts_MemChain(Mock.reset_CallInstance, cmock_guts_index);
  Mock.reset_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
}

void reset_AddCallback(CMOCK_reset_CALLBACK Callback)
{
  Mock.reset_IgnoreBool = (char)0;
  Mock.reset_CallbackBool = (char)1;
  Mock.reset_CallbackFunctionPointer = Callback;
}

void reset_Stub(CMOCK_reset_CALLBACK Callback)
{
  Mock.reset_IgnoreBool = (char)0;
  Mock.reset_CallbackBool = (char)0;
  Mock.reset_CallbackFunctionPointer = Callback;
}

double divide_by_half(double value)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_divide_by_half_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_divide_by_half);
  cmock_call_instance = (CMOCK_divide_by_half_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.divide_by_half_CallInstance);
  Mock.divide_by_half_CallInstance = CMock_Guts_MemNext(Mock.divide_by_half_CallInstance);
  if (Mock.divide_by_half_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.divide_by_half_FinalReturn;
    Mock.divide_by_half_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.divide_by_half_CallbackBool &&
      Mock.divide_by_half_CallbackFunctionPointer != NULL)
  {
    double cmock_cb_ret = Mock.divide_by_half_CallbackFunctionPointer(value, Mock.divide_by_half_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_divide_by_half,CMockString_value);
    UNITY_TEST_ASSERT_EQUAL_FLOAT(cmock_call_instance->Expected_value, value, cmock_line, CMockStringMismatch);
  }
  if (Mock.divide_by_half_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.divide_by_half_CallbackFunctionPointer(value, Mock.divide_by_half_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_divide_by_half(CMOCK_divide_by_half_CALL_INSTANCE* cmock_call_instance, double value);
void CMockExpectParameters_divide_by_half(CMOCK_divide_by_half_CALL_INSTANCE* cmock_call_instance, double value)
{
  cmock_call_instance->Expected_value = value;
}

void divide_by_half_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, double cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_divide_by_half_CALL_INSTANCE));
  CMOCK_divide_by_half_CALL_INSTANCE* cmock_call_instance = (CMOCK_divide_by_half_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.divide_by_half_CallInstance = CMock_Guts_MemChain(Mock.divide_by_half_CallInstance, cmock_guts_index);
  Mock.divide_by_half_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.divide_by_half_IgnoreBool = (char)1;
}

void divide_by_half_CMockStopIgnore(void)
{
  if(Mock.divide_by_half_IgnoreBool)
    Mock.divide_by_half_CallInstance = CMock_Guts_MemNext(Mock.divide_by_half_CallInstance);
  Mock.divide_by_half_IgnoreBool = (char)0;
}

void divide_by_half_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, double value, double cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_divide_by_half_CALL_INSTANCE));
  CMOCK_divide_by_half_CALL_INSTANCE* cmock_call_instance = (CMOCK_divide_by_half_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.divide_by_half_CallInstance = CMock_Guts_MemChain(Mock.divide_by_half_CallInstance, cmock_guts_index);
  Mock.divide_by_half_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_divide_by_half(cmock_call_instance, value);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void divide_by_half_AddCallback(CMOCK_divide_by_half_CALLBACK Callback)
{
  Mock.divide_by_half_IgnoreBool = (char)0;
  Mock.divide_by_half_CallbackBool = (char)1;
  Mock.divide_by_half_CallbackFunctionPointer = Callback;
}

void divide_by_half_Stub(CMOCK_divide_by_half_CALLBACK Callback)
{
  Mock.divide_by_half_IgnoreBool = (char)0;
  Mock.divide_by_half_CallbackBool = (char)0;
  Mock.divide_by_half_CallbackFunctionPointer = Callback;
}

double multiply_by_two(double value)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_multiply_by_two_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_multiply_by_two);
  cmock_call_instance = (CMOCK_multiply_by_two_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.multiply_by_two_CallInstance);
  Mock.multiply_by_two_CallInstance = CMock_Guts_MemNext(Mock.multiply_by_two_CallInstance);
  if (Mock.multiply_by_two_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.multiply_by_two_FinalReturn;
    Mock.multiply_by_two_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.multiply_by_two_CallbackBool &&
      Mock.multiply_by_two_CallbackFunctionPointer != NULL)
  {
    double cmock_cb_ret = Mock.multiply_by_two_CallbackFunctionPointer(value, Mock.multiply_by_two_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_multiply_by_two,CMockString_value);
    UNITY_TEST_ASSERT_EQUAL_FLOAT(cmock_call_instance->Expected_value, value, cmock_line, CMockStringMismatch);
  }
  if (Mock.multiply_by_two_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.multiply_by_two_CallbackFunctionPointer(value, Mock.multiply_by_two_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_multiply_by_two(CMOCK_multiply_by_two_CALL_INSTANCE* cmock_call_instance, double value);
void CMockExpectParameters_multiply_by_two(CMOCK_multiply_by_two_CALL_INSTANCE* cmock_call_instance, double value)
{
  cmock_call_instance->Expected_value = value;
}

void multiply_by_two_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, double cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_multiply_by_two_CALL_INSTANCE));
  CMOCK_multiply_by_two_CALL_INSTANCE* cmock_call_instance = (CMOCK_multiply_by_two_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.multiply_by_two_CallInstance = CMock_Guts_MemChain(Mock.multiply_by_two_CallInstance, cmock_guts_index);
  Mock.multiply_by_two_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.multiply_by_two_IgnoreBool = (char)1;
}

void multiply_by_two_CMockStopIgnore(void)
{
  if(Mock.multiply_by_two_IgnoreBool)
    Mock.multiply_by_two_CallInstance = CMock_Guts_MemNext(Mock.multiply_by_two_CallInstance);
  Mock.multiply_by_two_IgnoreBool = (char)0;
}

void multiply_by_two_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, double value, double cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_multiply_by_two_CALL_INSTANCE));
  CMOCK_multiply_by_two_CALL_INSTANCE* cmock_call_instance = (CMOCK_multiply_by_two_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.multiply_by_two_CallInstance = CMock_Guts_MemChain(Mock.multiply_by_two_CallInstance, cmock_guts_index);
  Mock.multiply_by_two_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_multiply_by_two(cmock_call_instance, value);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void multiply_by_two_AddCallback(CMOCK_multiply_by_two_CALLBACK Callback)
{
  Mock.multiply_by_two_IgnoreBool = (char)0;
  Mock.multiply_by_two_CallbackBool = (char)1;
  Mock.multiply_by_two_CallbackFunctionPointer = Callback;
}

void multiply_by_two_Stub(CMOCK_multiply_by_two_CALLBACK Callback)
{
  Mock.multiply_by_two_IgnoreBool = (char)0;
  Mock.multiply_by_two_CallbackBool = (char)0;
  Mock.multiply_by_two_CallbackFunctionPointer = Callback;
}

double power_of_two(double value)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_power_of_two_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_power_of_two);
  cmock_call_instance = (CMOCK_power_of_two_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.power_of_two_CallInstance);
  Mock.power_of_two_CallInstance = CMock_Guts_MemNext(Mock.power_of_two_CallInstance);
  if (Mock.power_of_two_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.power_of_two_FinalReturn;
    Mock.power_of_two_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.power_of_two_CallbackBool &&
      Mock.power_of_two_CallbackFunctionPointer != NULL)
  {
    double cmock_cb_ret = Mock.power_of_two_CallbackFunctionPointer(value, Mock.power_of_two_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_power_of_two,CMockString_value);
    UNITY_TEST_ASSERT_EQUAL_FLOAT(cmock_call_instance->Expected_value, value, cmock_line, CMockStringMismatch);
  }
  if (Mock.power_of_two_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.power_of_two_CallbackFunctionPointer(value, Mock.power_of_two_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_power_of_two(CMOCK_power_of_two_CALL_INSTANCE* cmock_call_instance, double value);
void CMockExpectParameters_power_of_two(CMOCK_power_of_two_CALL_INSTANCE* cmock_call_instance, double value)
{
  cmock_call_instance->Expected_value = value;
}

void power_of_two_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, double cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_power_of_two_CALL_INSTANCE));
  CMOCK_power_of_two_CALL_INSTANCE* cmock_call_instance = (CMOCK_power_of_two_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.power_of_two_CallInstance = CMock_Guts_MemChain(Mock.power_of_two_CallInstance, cmock_guts_index);
  Mock.power_of_two_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.power_of_two_IgnoreBool = (char)1;
}

void power_of_two_CMockStopIgnore(void)
{
  if(Mock.power_of_two_IgnoreBool)
    Mock.power_of_two_CallInstance = CMock_Guts_MemNext(Mock.power_of_two_CallInstance);
  Mock.power_of_two_IgnoreBool = (char)0;
}

void power_of_two_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, double value, double cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_power_of_two_CALL_INSTANCE));
  CMOCK_power_of_two_CALL_INSTANCE* cmock_call_instance = (CMOCK_power_of_two_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.power_of_two_CallInstance = CMock_Guts_MemChain(Mock.power_of_two_CallInstance, cmock_guts_index);
  Mock.power_of_two_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_power_of_two(cmock_call_instance, value);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void power_of_two_AddCallback(CMOCK_power_of_two_CALLBACK Callback)
{
  Mock.power_of_two_IgnoreBool = (char)0;
  Mock.power_of_two_CallbackBool = (char)1;
  Mock.power_of_two_CallbackFunctionPointer = Callback;
}

void power_of_two_Stub(CMOCK_power_of_two_CALLBACK Callback)
{
  Mock.power_of_two_IgnoreBool = (char)0;
  Mock.power_of_two_CallbackBool = (char)0;
  Mock.power_of_two_CallbackFunctionPointer = Callback;
}

double square_root(double value)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_square_root_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_square_root);
  cmock_call_instance = (CMOCK_square_root_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.square_root_CallInstance);
  Mock.square_root_CallInstance = CMock_Guts_MemNext(Mock.square_root_CallInstance);
  if (Mock.square_root_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.square_root_FinalReturn;
    Mock.square_root_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.square_root_CallbackBool &&
      Mock.square_root_CallbackFunctionPointer != NULL)
  {
    double cmock_cb_ret = Mock.square_root_CallbackFunctionPointer(value, Mock.square_root_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_square_root,CMockString_value);
    UNITY_TEST_ASSERT_EQUAL_FLOAT(cmock_call_instance->Expected_value, value, cmock_line, CMockStringMismatch);
  }
  if (Mock.square_root_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.square_root_CallbackFunctionPointer(value, Mock.square_root_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_square_root(CMOCK_square_root_CALL_INSTANCE* cmock_call_instance, double value);
void CMockExpectParameters_square_root(CMOCK_square_root_CALL_INSTANCE* cmock_call_instance, double value)
{
  cmock_call_instance->Expected_value = value;
}

void square_root_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, double cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_square_root_CALL_INSTANCE));
  CMOCK_square_root_CALL_INSTANCE* cmock_call_instance = (CMOCK_square_root_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.square_root_CallInstance = CMock_Guts_MemChain(Mock.square_root_CallInstance, cmock_guts_index);
  Mock.square_root_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.square_root_IgnoreBool = (char)1;
}

void square_root_CMockStopIgnore(void)
{
  if(Mock.square_root_IgnoreBool)
    Mock.square_root_CallInstance = CMock_Guts_MemNext(Mock.square_root_CallInstance);
  Mock.square_root_IgnoreBool = (char)0;
}

void square_root_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, double value, double cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_square_root_CALL_INSTANCE));
  CMOCK_square_root_CALL_INSTANCE* cmock_call_instance = (CMOCK_square_root_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.square_root_CallInstance = CMock_Guts_MemChain(Mock.square_root_CallInstance, cmock_guts_index);
  Mock.square_root_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_square_root(cmock_call_instance, value);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void square_root_AddCallback(CMOCK_square_root_CALLBACK Callback)
{
  Mock.square_root_IgnoreBool = (char)0;
  Mock.square_root_CallbackBool = (char)1;
  Mock.square_root_CallbackFunctionPointer = Callback;
}

void square_root_Stub(CMOCK_square_root_CALLBACK Callback)
{
  Mock.square_root_IgnoreBool = (char)0;
  Mock.square_root_CallbackBool = (char)0;
  Mock.square_root_CallbackFunctionPointer = Callback;
}

