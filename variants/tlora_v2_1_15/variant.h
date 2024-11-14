// TTGO LoRa32 V2.1.5 (aka T3 V1.5, aka LoRa32 V2.1 release 1.5)
// No battery voltage measurement
// No controllable LED
// No button

#define I2C_SDA 21 // I2C pins for this board
#define I2C_SCL 22

#define USE_RF95
#define LORA_DIO0 26 // a No connect on the SX1262 module
#define LORA_RESET 23
#define LORA_DIO1 33 // https://www.thethingsnetwork.org/forum/t/big-esp32-sx127x-topic-part-3/18436
#define LORA_DIO2 32 // Not really used

// Disable brownout
#define DISABLE_BROWNOUT
