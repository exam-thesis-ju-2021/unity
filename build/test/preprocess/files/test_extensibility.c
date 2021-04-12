#include "src/peripheral.h"
#include "src/hardware.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.0/vendor/unity/src/unity.h"




void ASSERT_PIN_STATE(PinState expected, uint16_t gpio);



void setUp(void)

{

 hw_init();

}



void tearDown(void)

{

 hw_reset();

}



void test_extensibility(void)

{

 uint16_t pin = 4;

 digital_write(pin, HIGH);



 ASSERT_PIN_STATE(HIGH, 4);

}



void ASSERT_PIN_STATE(PinState expected, uint16_t gpio)

{

 UnityMessage(("Executing customized assertion..."), 28);



 char* output = (char*)malloc(128 * sizeof(char));



 if (digital_read(gpio) == expected)

 {

  sprintf(output, "assert '%s' passed.", __func__);

  do { UnityMessage((output), 35); longjmp(Unity.AbortFrame, 1); } while(0);

 }

 else

 {

  sprintf(output, "assert '%s' failed.", __func__);

  UnityFail( ((output)), (UNITY_UINT)(40));

 }



 free(output);

}
