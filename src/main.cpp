#include <Arduino.h>
#include <wRouter.h>
#include <scanner.h>

#include "WiFi.h"

scanner sca;    
String createJson(wRouter wRouters[], int size){
String json ="{";
json += "\"routers\":[";
for(int i =0; i < size ; i++){
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

sca.scanNetworks();
createJson(sca.getFoundNetworks(),sca.getNetworkAmmount());

}