#include <Arduino.h>
#include <wRouter.h>
#include "WiFi.h"


String createJson(wRouter wRouters[] , int size){
String json ="{";
json += "\"routers\":[";
for(int i =0; i < size; i++){
  String jsObject = wRouters[i].toJson().c_str();
  json += jsObject;
  if(i != size - 1){
     json += ",";
  }
}
json += "]";
json +="}";
return json;
}

void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
    WiFi.mode(WIFI_STA);
    WiFi.disconnect();
    delay(100);
}


void loop() {
int n = WiFi.scanNetworks();
    Serial.println("scan done");
    if (n == 0) {
        Serial.println("no networks found");
    } else {
        Serial.print(n);
        Serial.println(" networks found");
        wRouter rs[n];
        for (int i = 0; i < n; ++i) {
            wRouter obj(String(WiFi.RSSI(i)).c_str() ,WiFi.SSID(i).c_str(),WiFi.BSSIDstr(i).c_str());
            rs[i] = obj;
            
        }
        Serial.println(createJson(rs,n));
        delay(1000);
    }

}