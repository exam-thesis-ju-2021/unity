#ifndef HARDWARE_H
#define HARDWARE_H

#include <stdint.h>
#include <stdbool.h>
#include "peripheral.h"

typedef enum {
	LOW = 0,
	HIGH = 1
} PinState;

typedef enum {
	INPUT = 0,
	OUTPUT = 1,
	INPUT_PULLUP = 2
} PinMode;

typedef struct {
	PinState* states;
	PinMode* modes;
	Peripheral* peripherals;
} Hardware;

static Hardware hardware;

void hw_init();
void hw_reset();

void pin_mode(uint8_t gpio, PinMode mode);
void digital_write(uint8_t gpio, PinState state);
PinState digital_read(uint8_t gpio);

void analog_write(uint8_t gpio, uint16_t value);
uint16_t analog_read(uint8_t gpio);

void set_peripheral(uint8_t gpio, Peripheral peripheral);

#endif