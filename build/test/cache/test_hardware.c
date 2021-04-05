#include "src/hardware.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.0/vendor/unity/src/unity.h"


void setUp()

{

    hw_init();

}



void tearDown()

{

    hw_reset();

}



void test_hardware_digital(void)

{

    digital_write(1, HIGH);

    PinState state = digital_read(1);

    UnityAssertEqualNumber((UNITY_INT)((HIGH)), (UNITY_INT)((state)), (

   ((void *)0)

   ), (UNITY_UINT)(18), UNITY_DISPLAY_STYLE_INT);

}
