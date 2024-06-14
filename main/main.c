#include <stdio.h>
#include "Wifi.h"

void app_main(void) {

WIFI_AP_CONNECTION(); // This functions help to Connect ESP32 Wifi in Station Mode.
WIFI_STA_CONNECTION(); // This functions help to Connect ESP32 Wifi in AP Mode.
WIFI_SCAN(); // This function helps to Scan the nearby Networks for the ESP32 to Connect to.
WIFI_Reconnect(); // This function helps to Reconnect ESP32 to Wifi.

}
