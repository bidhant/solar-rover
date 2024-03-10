#include "esp_log.h"

#include "connect.h"
#include "server.h"

char *TAG = "MAIN APP";

void app_main(void)
{
    if (wifiInit() != ESP_OK){
        ESP_LOGE(TAG,"Restarting the ESP server");
        esp_restart();
    }
    start_server(); // this is to send 
}

