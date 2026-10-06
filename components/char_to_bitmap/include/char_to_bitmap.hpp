#include <iostream>
#include <string>


class CharToBitmap {
    public:
        uint8_t get_bitmap(char* character);

    private:
        int led_width{8};
        int led_length{8};
        char character[];
        uint8_t bitmap_bit[led_length][led_width];
};