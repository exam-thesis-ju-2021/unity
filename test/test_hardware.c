#include "unity.h"
#include "hardware.h"
#include "peripheral.h"

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
    TEST_ASSERT_EQUAL(ref, value);
}

uint16_t _read(Peripheral* self)
{
    return self->value;
}

void _write(Peripheral* self, uint16_t value)
{
    self->value = value;
}