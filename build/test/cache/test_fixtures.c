#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.0/vendor/unity/src/unity.h"


void setUp(void)

{

 UnityMessage(("Verifying that setUp() is executed."), 6);

}



void tearDown(void)

{

 UnityMessage(("Verifying that tearDown() is executed."), 11);

}



void test_verification(void)

{

 do {if ((

1 

== 

1

)) {} else {UnityFail( ((" Expression Evaluated To FALSE")), (UNITY_UINT)((UNITY_UINT)(16)));}} while(0);

 UnityMessage(("Verifying that test_fixtures() has been run in between setup() and tearDown()."), 17);

}
