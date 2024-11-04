#include <iostream>
using namespace std;

class Polygon {
    protected:
    int width;
    int height;
    public:
    Polygon(int a, int b) : width(a), height(b){}
    virtual int area() = 0;
    virtual void printarea(){
        cout<< this->area() << "\n";
    }
};



class Triangle : public Polygon {
    public:
    Triangle(int w, int h) : Polygon(w,h){}
    int area() override {return (width * height)/2 ;}
};

class Rectangle : public Polygon{
    public:
    Rectangle(int w, int h ) : Polygon(w,h) {}
    int area() override {
        return (width * height);
    }
};


void printandDelAreas(Polygon* array[], int size){
    for( int i = 0; i< size; i++){
        array[i]->printarea();
    }
}

int main(){
    Polygon* figuras[2];
    
    figuras[0] = new Triangle(4,10);
    figuras[1] = new Rectangle(5,20);

    printandDelAreas(figuras, 2);
}
