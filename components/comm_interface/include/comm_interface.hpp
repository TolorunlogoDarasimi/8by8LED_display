#include <iostream>
#include <string>
#include "esp_wifi.h"
#include "nimble/nimble_port.h"





class CommInterface {
    public:
        esp_err_t is_connected();
        std::string getMessage();
};


// MQTT class
class Mqtt : public CommInterface {
    public:
        esp_err_t init();
        esp_err_t subscribe();
        esp_err_t read();

    private:
        std::string topic;
        const int* mqtt_port;
        const char* mqtt_server;
};

//Bluetooth class
class BLE : public CommInterface{
    public:
        esp_err_t init();
        esp_err_t read();
        
    private:
        std::string* bluetooth_name;
        std::string* bluetototh_uuid;
        std::string* BLE_server_name;
        std::string* BLE_server_uuid;
};