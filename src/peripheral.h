#ifndef PERIPHERAL_HEADER
#define PERIPHERAL_HEADER

#include <stdint.h>

typedef struct Peripheral Peripheral;
typedef uint16_t (*func_read_t) (Peripheral* self); 
typedef void (*func_write_t) (Peripheral* self, uint16_t value);

typedef struct Peripheral {
	uint16_t value;
	func_read_t read;
	func_write_t write;
} Peripheral;

Peripheral create_peripheral(func_read_t read, func_write_t write);

#endif