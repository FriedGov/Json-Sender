
#ifndef SCANNER_H
#define SCANNER_H
#include "WiFi.h"
#include <wRouter.h>


class scanner
{
    private:
      int networkAmmount; 
      wRouter * foundRouters;  
        
    public:
      scanner();
      void scanNetworks(); 
      wRouter * getFoundNetworks();
      int getNetworkAmmount();


};




#endif