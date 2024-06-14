idf_component_register(
    SRCS "Wifi.c"
    INCLUDE_DIRS "."
    REQUIRES
    PRIV_REQUIRES esp_wifi nvs_flash
)
