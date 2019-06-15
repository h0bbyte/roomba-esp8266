#include "secrets.h"

#define HOSTNAME "roomba" // e.g. roomba.local
//#define BRC_PIN 15
//#define ROOMBA_650_SLEEP_FIX 1
#define SERIAL_RX     D5  // pin for SoftwareSerial RX
#define SERIAL_TX     D6  // pin for SoftwareSerial TX
#define Wake_Pin      D8

#define ADC_VOLTAGE_DIVIDER 44.551316985
//#define ENABLE_ADC_SLEEP

#define MQTT_SERVER "10.255.255.1"
#define MQTT_USER "roomba"
#define MQTT_COMMAND_TOPIC "vacuum/command"
#define MQTT_STATE_TOPIC "vacuum/state"
