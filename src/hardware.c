#include "hardware.h"
#include <stdlib.h>

void hw_init()
{
	hw_reset();
	hardware.states = malloc(sizeof(PinState) * 8);
	hardware.modes = malloc(sizeof(PinMode) * 8);
	hardware.analog_values = malloc(sizeof(uint16_t) * 8);

	for (int i = 0; i < 8; i++) {
		hardware.states[i] = LOW;
		hardware.modes[i] = INPUT;
		hardware.analog_values[i] = 0;
	}
}

void hw_reset()
{
	free(hardware.states);
	free(hardware.modes);
}

void pin_mode(uint8_t gpio, PinMode mode)
{
	hardware.modes[gpio] = mode;
}

void digital_write(uint8_t gpio, PinState state)
{
	hardware.states[gpio] = state;
}

PinState digital_read(uint8_t gpio)
{
	return hardware.states[gpio];
}

void analog_write(uint8_t gpio, uint16_t value)
{
	hardware.analog_values[gpio] = value;
}

uint16_t analog_read(uint8_t gpio) 
{
	return hardware.analog_values[gpio];
}

