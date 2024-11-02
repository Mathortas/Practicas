#include <string>
using namespace std;
#ifndef TIME_H
#define TIME_H
class Time {
    public:
    explicit Time (int = 0, int = 0, int =0);
    //Funciones set
    void setTime(int,int,int);
    void setHour(int);
    void setMinute(int);
    void setSecond(int);
    // Funciones get
    unsigned int getHour() const;
    unsigned int getMinute() const;
    unsigned int getSecond() const;
    string toUniversalString() const;
    string toStandardString() const;
    private:
    unsigned int hour = 0;
    unsigned int minute = 0;
    unsigned int second = 0;
};

#endif