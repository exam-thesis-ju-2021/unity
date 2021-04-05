









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



static Hardware hardware;



void hw_init();

void hw_reset();



void pin_mode(uint8_t gpio, PinMode mode);

void digital_write(uint8_t gpio, PinState state);

PinState digital_read(uint8_t gpio);



void analog_write(uint8_t gpio, PinState state);

PinState analog_read(uint8_t gpio);
