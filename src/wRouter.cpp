#include <wRouter.h>



wRouter::wRouter(){
    e_rssi = "NOT ASSIGNED";
    e_ssid = "NOT ASSIGNED";
}


wRouter::wRouter(std::string rssi, std::string ssid, std::string mac){
    e_rssi = rssi;
    e_ssid = ssid;
    e_mac = mac;
}


std::string wRouter::toJson(){
    std::ostringstream st;
    st << "{";
    st << "\"rssi\":" << e_rssi << ",";
    st << "\"ssid\": \"" << e_ssid << "\",";
    st << "\"mac\": \"" << e_mac << "\"";
    st << "}";
    return st.str();
}


        
        
    


