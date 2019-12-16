#ifndef wROUTER_H
#define wROUTER_H
#include <String>
#include <sstream>

class wRouter
{
    private:
        int e_range;
        std::string e_macAddr; 
        
        
    public:
        wRouter();
        wRouter(int range, std::string macAddr);
        std::string toString();
        std::string toJson();
        std::string getMac();
        int getRange();


};




#endif