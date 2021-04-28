#include "src/library/peripheral.h"
#include "src/library/hardware.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.0/vendor/unity/src/unity.h"




void ASSERT_PIN_STATE(PinState expected, uint16_t gpio);



void setUp(void)

{

 hardware_init();

}



void tearDown(void)

{

 hardware_reset();

}



void test_extensibility(void)

{

 uint16_t pin = 4;

 digital_write(pin, HIGH);

 ASSERT_PIN_STATE(HIGH, 4);

}



void ASSERT_PIN_STATE(PinState expected, uint16_t gpio)

{

 UnityMessage(("Executing customized assertion..."), 27);



 char* output = (char*)malloc(128 * sizeof(char));



 if (digital_read(gpio) == expected)

 {

  sprintf(output, "Custom assertion '%s' passed.", __func__);

  do { UnityMessage((output), 34); longjmp(Unity.AbortFrame, 1); } while(0);

 }

 else

 {

  sprintf(output, "Custom assertion '%s' failed.", __func__);

  UnityFail( ((output)), (UNITY_UINT)(39));

 }



 free(output);

}
