#ifndef wROUTER_H
#define wROUTER_H
#include <sstream>

class wRouter
{
    private:
        std::string e_rssi;
        std::string e_mac; 
        std::string e_ssid; 
        
        
    public:
        wRouter();
        wRouter(std::string rssi, std::string ssid, std::string mac);
        std::string toJson();


};




#endif