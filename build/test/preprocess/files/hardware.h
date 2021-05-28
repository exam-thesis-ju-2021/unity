#include "src/library/peripheral.h"








typedef enum {

 LOW = 0,

 HIGH = 1

} PinState;



typedef struct {

 PinState* states;

 Peripheral* peripherals;

} Hardware;



static Hardware hardware;



void hardware_init();

void hardware_reset();



void digital_write(uint8_t gpio, PinState state);

PinState digital_read(uint8_t gpio);



void analog_write(uint8_t gpio, void* data);

void* analog_read(uint8_t gpio);



void set_peripheral(uint8_t gpio, Peripheral peripheral);
