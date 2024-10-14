// Copy this file to local_config.h and edit appropriately
//

// Operational settings

// EBus device address for BaiMon (master)
#define CONFIG_EBUS_ADDR_HOST   0
// EBus device address for boiler (master)
#define CONFIG_EBUS_ADDR_BOILER 3

// EBus device poll intervals (seconds)

// EBus poll interval when last command succeeded
#define CONFIG_POLL_INTERVAL_NORM 600
// EBus poll interval whan last command failed
#define CONFIG_POLL_INTERVAL_FAIL 60
// Delay before first poll after detecting EBus presense
#define CONFIG_FIRST_POLL_DELAY 5

// MQTT settings

// MQTT topic name
#define CONFIG_MQTT_TOPIC "ebus/vaillant"
// Send interval (seconds)
#define CONFIG_MQTT_SEND_INTERVAL 60
// Startup delay (seconds)
#define CONFIG_MQTT_START_DELAY 40

// Push button at GPIO5 before power on and settings will be erased
#define RESETBTN 5
