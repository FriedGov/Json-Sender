#include <scanner.h>

scanner::scanner(){

}



 void scanner::scanNetworks(){ 
    networkAmmount = WiFi.scanNetworks();
        for (int i = 0; i < networkAmmount; ++i) {
            wRouter obj(String(WiFi.RSSI(i)).c_str() ,WiFi.SSID(i).c_str(),WiFi.BSSIDstr(i).c_str());
            foundRouters[i] = obj;
        }
 }

 wRouter * scanner::getFoundNetworks(){
     return foundRouters;
 }

 int scanner::getNetworkAmmount(){
     return networkAmmount;
 }
 

