# esp-idf-vscode-WIFI_Library
In this repository, I have written a Wifi Library in ESP-IDF and in this library i have implemented various functions.

## Functions

1. WIFI_STA_CONNECTION()
```
Connect ESP32 in STA Mode Wifi
```

2. WIFI_AP_CONNECTION()
```
Connect ESP32 in AP Mode Wifi
```

3. WIFI_SCAN()
```
Scan Wifi Networks for ESP32
```
4. WIFI_Reconnect()
```
Reconnect ESP32 to Wifi
```

## Config, Build and Flash

```
idf.py set-target esp32
idf.py menuconfig
idf.py build
idf.py -p (PORT) flash
```
