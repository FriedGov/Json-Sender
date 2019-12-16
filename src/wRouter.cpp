#include <wRouter.h>



wRouter::wRouter(){
    e_range = 0;
    e_ssid = "NOT ASSIGNED";
}


wRouter::wRouter(int range, std::string ssid){
    e_range = range;
    e_ssid = ssid;
}

std::string wRouter::toString(){
    std::ostringstream st;
    st << "range:" << e_range <<";ssid:" << e_ssid << ";";
    return st.str();
}

std::string wRouter::toJson(){
    std::ostringstream st;
    st << "{";
    st << "\"range\":" << e_range << ",";
    st << "\"ssid\": \"" << e_ssid << "\"";
    st << "}";
    return st.str();
}

std::string wRouter::getMac(){
    return e_ssid;
}

int wRouter::getRange(){
    return e_range;
}
        
        
    


