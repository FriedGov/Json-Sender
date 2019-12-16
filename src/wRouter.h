#ifndef wROUTER_H
#define wROUTER_H
#include <String>
#include <sstream>

class wRouter
{
    private:
        int e_range;
        std::string e_ssid; 
        
        
    public:
        wRouter();
        wRouter(int range, std::string ssid);
        std::string toString();
        std::string toJson();
        std::string getMac();
        int getRange();


};




#endif