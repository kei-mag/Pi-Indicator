#include<stdio.h>
#include<stdlib.h>
#include<pigpio.h>
#include<regex.h>
// #include<glib.h>

#define I2C_BUS 1
#define I2C_ADDR 0x3c
#define INVERSE_DISPLAY 0

int main(void) {
    int i2c_handler = i2cOpen(I2C_BUS, I2C_ADDR, 0);
    
    i2cClose(i2c_handler);
    re
    return EXIT_SUCCESS;
}