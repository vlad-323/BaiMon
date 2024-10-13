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

// Enable data upload to MQTT server
#define CONFIG_MQTT_ENABLE 1
// MQTT server host name
#define CONFIG_MQTT_HOST "narodmon.ru"
// MQTT server port
#define CONFIG_MQTT_PORT 1883
// MQTT user name and password
#define CONFIG_MQTT_USERNAME "my_login"
#define CONFIG_MQTT_PASSWORD "my_password"
// MQTT client ID (narodmon: device MAC address)
#define CONFIG_MQTT_CLIENT_ID "00:00:00:00:00:00"
// MQTT topic name (narodmon: user/devname)
#define CONFIG_MQTT_TOPIC "user/device"
// Send interval (seconds)
#define CONFIG_MQTT_SEND_INTERVAL 600
// Startup delay (seconds) to avoid violating narodmon max data rate
#define CONFIG_MQTT_START_DELAY 400
