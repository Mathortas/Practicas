#include <iomanip>
#include <stdexcept>
#include <sstream>
#include <string>
#include "time.h"
using namespace std;

Time::Time(int hour, int minute, int second){
    setTime(hour,minute,second);
}
//Funciones set
void Time::setTime(int h, int m, int s){
    setHour(h);
    setMinute(m);
    setSecond(s);
}
void Time::setHour(int h) {
 if (h >= 0 && h < 24) {
 hour = h;
 }
 else {
 throw invalid_argument("Revisa bien tu hora (0-23)");
 }
 }
 void Time::setMinute(int m) {
 if (m >= 0 && m < 60) {
 minute = m;
 }
 else {
 throw invalid_argument("minute must be 0-59");
 }
 }
 void Time::setSecond(int s) {
 if (s >= 0 && s < 60) {
 second = s;
 }
 else {
 throw invalid_argument("second must be 0-59");
 }
 }
//Funcion de get

unsigned int Time::getHour() const {return hour;}

unsigned Time::getMinute() const {return minute;}

unsigned Time::getSecond() const {return second;}

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