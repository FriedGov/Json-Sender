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
//json += "\"MAC\":" + r.getMac().c_str();



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
            // Print SSID and RSSI for each network found
          //  Serial.print(i + 1);
           // Serial.print(": ");
            //Serial.print(WiFi.SSID(i));
           // Serial.print(" (");
           // Serial.print(WiFi.RSSI(i));
           // Serial.print("-");
            //Serial.print(WiFi.macAddress());
           // Serial.print(")");
            //Serial.println((WiFi.encryptionType(i) == WIFI_AUTH_OPEN)?" ":"*");
            char[] cha = WiFi.BSSID(i);
            String macString = String(WiFi.BSSID(i));
            wRouter obj(20,macString.c_str());
            rs[i] = obj;
            
        }
        Serial.println(createJson(rs,n));
        delay(1000);
    }
        




 //wRouter obj(20,"20:333:bb");
 // wRouter obj2(23,"22:333:bb");
 // wRouter obj3(26,"24:333:bb");
  ///createJson(obj);
 // wRouter rs[3];
 // rs[0] = obj;
 // rs[1] = obj2;
 // rs[2] = obj3;
  //Serial.println(obj.toJson().c_str());


 // Serial.println(createJson(rs,3));
  //delay(100000);
  // put your main code here, to run repeatedly:
}