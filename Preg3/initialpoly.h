#include <iostream>
using namespace std;

class Polygon {
    protected:
    int width;
    int height;
    public:
    Polygon(int a, int b) : width(a), height(b){}
    int area (void) {return 0;}
    void printarea(){
        cout<< this->area() << "\n ";
    }
};