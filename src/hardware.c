#include "hardware.h"
#include <stdlib.h>

void hw_init()
{
	hw_reset();
	hardware.states = malloc(sizeof(PinState) * 8);
	hardware.modes = malloc(sizeof(PinMode) * 8);
	hardware.peripherals = malloc(sizeof(Peripheral) * 8);

	for (int i = 0; i < 8; i++) {
		hardware.states[i] = LOW;
		hardware.modes[i] = INPUT;
	}
}

void hw_reset()
{
	free(hardware.states);
	free(hardware.modes);
	free(hardware.peripherals);
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
	Peripheral* peripheral = &hardware.peripherals[gpio];
	peripheral->write(peripheral, value);
}

uint16_t analog_read(uint8_t gpio) 
{
	Peripheral* peripheral = &hardware.peripherals[gpio];
	return peripheral->read(peripheral);
}

void set_peripheral(uint8_t gpio, Peripheral peripheral) 
{
	hardware.peripherals[gpio] = peripheral;
}