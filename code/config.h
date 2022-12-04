#ifndef LORA_TTNMAPPER_TBEAM_CONFIG_INCLUDED
#define LORA_TTNMAPPER_TBEAM_CONFIG_INCLUDED


// UPDATE WITH YOUR TTN KEYS AND ADDR.
static PROGMEM u1_t NWKSKEY[16] = { 0x5E, 0xFE, 0xF5, 0x11, 0x1D, 0x81, 0x6B, 0x6F, 0x03, 0xE3, 0x69, 0x0F, 0xF3, 0x8F, 0xAB, 0xE1 }; // LoRaWAN NwkSKey, network session key 
static u1_t PROGMEM APPSKEY[16] = { 0x1C, 0x95, 0x2E, 0x36, 0xBE, 0xE0, 0x03, 0x6A, 0x56, 0x74, 0x40, 0x3D, 0x8A, 0x81, 0x57, 0xEE }; // LoRaWAN AppSKey, application session key 
static const u4_t DEVADDR = 260BC5BC ; // LoRaWAN end-device address (DevAddr)


#endif //LORA_TTNMAPPER_TBEAM_CONFIG_INCLUDED
