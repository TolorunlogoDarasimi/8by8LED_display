#include <iostream>
#include <string>

enum Animation{
    LEFT,
    RIGHT,
    ON_HOLD
};

class Message {
    Message(std::string json);
    public:
        std::string covert_to_string();
        
}