#include <iostream>
#include <string>
#include "driver/gpio.h"

class DecadeCounter {
    public:
        esp_err_t init();
        esp_err_t reset();
        uint8_t step();

    private:
        gpio_num_t clock;
        gpio_num_t reset;
        gpio_num_t carry_out;
}