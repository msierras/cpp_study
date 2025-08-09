// A simple class hierarchy.

#include <iostream>
#include <cstring>
using namespace std;


// A class for two-dimensional objects. In this case, this is the base class.
class TwoDShape{
    public:
        double width, height;

        void showDim(){
            cout << "Width and height are " << width << " and " << height << "\n";
        }

};

// Triangle is derived from TwoDShape.
class Triangle : public TwoDShape{ // Triangle inherits TwoDShape. Notice the syntax.
    public:
        char style[20];

        double area() { return width * height / 2; } // Triangle can refer to the members of TwoDShape as if they
                                                     // were part of Triangle.
        
        void showStyle() { cout << "Triangle is " << style << "\n"; }


};                                                   


int main(){
    Triangle t1, t2;

    /* All members of Triangle are available to Triangle objects, even those inherited from TwoDShape */
    t1.width = 4.0;
    t1.height = 4.0;
    strcpy(t1.style, "isosceles");

    t2.width = 8.0;
    t2.height = 12.0;
    strcpy(t2.style, "right");

    cout << "Info for t1:\n";
    t1.showStyle();
    t1.showDim();
    cout << "Area is " << t1.area() << "\n";

    cout << "\n";
    cout << "Info for t2:\n";
    t2.showStyle();
    t2.showDim();
    cout << "Area is " << t2.area() << "\n";


    return 0;
}