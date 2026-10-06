#include <iostream>
#include <string>
#include "driver/gpio.h"

class ShiftRegister {
    public:
        esp_err_t init();
        esp_err_t writeByte(uint8_t data);
        uint8_t latch();
    private:
        gpio_num_t ser_pin;
        gpio_num_t scrlk_pin;
        gpio_num_t rclk_pin;
}