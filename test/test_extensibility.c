#include "unity.h"
#include "hardware.h"
#include "peripheral.h"
#include <stdlib.h>

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
	TEST_MESSAGE("Executing extended assertion...");
	
	char* output = (char*)malloc(128 * sizeof(char));
	if (!output) {
		TEST_FAIL_MESSAGE("Failed to allocate memory for 'char* output'");
		return;
	}

	if (digital_read(gpio) == expected) 
	{
		sprintf(output, "Custom assertion '%s' passed.", __func__);
		TEST_PASS_MESSAGE(output);
	}
	else 
	{
		sprintf(output, "Custom assertion '%s' failed.", __func__);
		TEST_FAIL_MESSAGE(output);
	}

	free(output);
}