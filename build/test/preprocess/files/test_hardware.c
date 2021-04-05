#include "src/peripheral.h"
#include "src/hardware.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.0/vendor/unity/src/unity.h"


uint16_t _read(Peripheral* self);

void _write(Peripheral* self, uint16_t value);



void setUp()

{

    hw_init();

    set_peripheral(1, create_peripheral(&_read, &_write));

}



void tearDown()

{

    hw_reset();

}



void test_hardware_digital(void)

{

    uint8_t pin = 1;

    uint16_t ref = 500;



    analog_write(pin, ref);

    uint16_t value = analog_read(pin);

    UnityAssertEqualNumber((UNITY_INT)((ref)), (UNITY_INT)((value)), (

   ((void *)0)

   ), (UNITY_UINT)(26), UNITY_DISPLAY_STYLE_INT);

}



uint16_t _read(Peripheral* self)

{

    return self->value;

}



void _write(Peripheral* self, uint16_t value)

{

    self->value = value;

}
