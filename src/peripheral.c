#include "peripheral.h"

Peripheral create_peripheral(func_read_t read, func_write_t write)
{
    Peripheral peripheral;
    peripheral.value = 0;
    peripheral.read = read;
    peripheral.write = write;
    return peripheral;
}