#include "src/object.h"








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

} Hardware;



void* new_Hardware();

struct Hardware {

 struct Object parent;

 PinState* states;

 PinMode* modes;

 void (*init)();

 void (*reset)();

 void (*pin_mode)(uint8_t gpio, PinMode mode);

 void (*digital_write)(uint8_t gpio, PinState state);

 PinState(*digital_read)(uint8_t gpio);

} StaticHardware = {

 .parent.New = new_Hardware

};



struct _Hardware {

 struct Hardware ops;

};



void _init(void *this);

void _reset(void *this);

void _pin_mode(void* this, uint8_t gpio, PinMode mode);

void _digital_write(void* this, uint8_t gpio, PinState state);

PinState _digital_read(void* this, uint8_t gpio);
