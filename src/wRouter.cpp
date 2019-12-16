#include <wRouter.h>



wRouter::wRouter(){
    e_range = 0;
    e_macAddr = "NOT ASSIGNED";
}


wRouter::wRouter(int range, std::string macAddr){
    e_range = range;
    e_macAddr = macAddr;
}

std::string wRouter::toString(){
    std::ostringstream st;
    st << "range:" << e_range <<";mac:" << e_macAddr << ";";
    return st.str();
}

std::string wRouter::toJson(){
    std::ostringstream st;
    st << "{";
    st << "\"range\":" << e_range << ",";
    st << "\"mac\": \"" << e_macAddr << "\"";
    st << "}";
    return st.str();
}

std::string wRouter::getMac(){
    return e_macAddr;
}

int wRouter::getRange(){
    return e_range;
}
        
        
    


