#include "unity.h"
#include "hardware.h"

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
    TEST_ASSERT_EQUAL(HIGH, state);
}