#include <iomanip>
#include <stdexcept>
#include <sstream>
#include <string>
#include "time.h"
using namespace std;
//Funcion SetTime
void Time::setTime(int h, int m, int s){
    if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60)){
        hour = h;
        minute = m;
        second = s;
    }
    else {
        throw invalid_argument("The hour/minut or second was out of range mf");
    }
}
//Funcion de dar horas
string Time::toUniversalString() const {
    ostringstream output;
    output << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" 
    << setw(2) << second;
    return output.str();
}

string Time::toStandardString() const {
    ostringstream output;
    output << ((hour == 0  ||(hour == 12) ? hour : hour%12)) << ":" << setw(2) << minute
    << ":" << setw(2) << second << (hour < 12 ? "AM" : "PM");
    return output.str();
}