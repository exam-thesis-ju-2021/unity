#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.0/vendor/unity/src/unity.h"


void setUp(void)

{

 UnityMessage(("Verifying that setUp() is executed."), 5);

}



void tearDown(void)

{

 UnityMessage(("Verifying that tearDown() is executed."), 10);

}



void test_fixtures(void)

{

 UnityMessage(("Running test..."), 15);

 UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((0)), (

((void *)0)

), (UNITY_UINT)(16), UNITY_DISPLAY_STYLE_UINT);

 UnityMessage(("Ending test..."), 17);

}
