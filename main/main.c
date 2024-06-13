#include <stdio.h>
#include "Wifi.h"
#define STA_MODE

void app_main(void) {
#ifdef AP_MODE
WIFI_AP_CONNECTION();
#endif

#ifdef STA_MODE
WIFI_STA_CONNECTION();
WIFI_SCAN();
WIFI_Reconnect();
#endif

}
