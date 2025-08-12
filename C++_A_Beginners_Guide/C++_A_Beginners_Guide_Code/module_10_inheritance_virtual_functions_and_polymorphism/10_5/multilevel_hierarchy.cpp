// A multi-level hierarchy.

#include <iostream>
#include <cstring>
using namespace std;


// A class for two-dimensional objects.
class TwoDShape{
    private:
        double width, height;
    
    public: 
        // Default constructor
        TwoDShape(){ width = height = 0.0; }

        // Constructor for TwoDShape.
        TwoDShape(double w, double h){
            width = w;
            height = h;
        }

        // Construct object with equal width and height.
        TwoDShape(double x){ width = height = x; }


        void showDim(){
            cout << "Width and height are " << width << " and " << height << "\n";
        }

        // accessor/getter function(s)
        double getWidth() { return width; }
        double getHeight() { return height; }

        // setter function(s)
        void setWidth(double w) { width = w; }
        void setHeight(double h) { height = h;}

};

// Triangle is derived from TwoDShape.

class Triangle : public TwoDShape{
    private:
        char style[20]; // now private

    public:
        /* A default constructor. This automatically invokes the default constructor of TwoDShape. */
        Triangle(){
            strcpy(style, "unknown");
        }

        // Constructor with three parameters.
        Triangle(char *str, double w, double h) : TwoDShape(w, h) { // <-- Calling the TwoDShape constructor
            strcpy(style ,str);
        }

        // Construct an isosceles triangle.
        Triangle(double x) : TwoDShape(x){
            strcpy(style, "isosceles");
        }

        double area(){ return getWidth() * getHeight() / 2; }

        void showStyle() { cout << "Triangle is " << style << "\n"; }

};

// Extend Triangle.
class ColorTriangle : public Triangle{
    private:
        char color[20];

    public: 
        ColorTriangle(char *clr, char *style, double w, double h) : Triangle(style, w, h){
            strcpy(color, clr);
        }

        // Display the color.
        void showColor(){ cout << "Color is " << color << "\n"; }

};


int main(){
    ColorTriangle t1("Blue", "right" , 8.0, 12.0), t2("Red", "isosceles", 2.0, 2.0);

    cout << "Info for t1:\n";
    t1.showStyle();
    t1.showDim();
    t1.showColor();
    cout << "Area is " << t1.area() << "\n";

    cout << "\n";

    cout << "Info for t2:\n";
    t2.showStyle();
    t2.showDim();
    t2.showColor();
    cout << "Area is " << t2.area() << "\n";


    return 0;
}