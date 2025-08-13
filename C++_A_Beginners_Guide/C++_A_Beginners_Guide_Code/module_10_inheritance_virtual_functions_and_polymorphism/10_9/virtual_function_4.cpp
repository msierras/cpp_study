// Use virtual functions and polymorphism.

#include <iostream>
#include <cstring>
using namespace std;


// A class for two-dimensional objects.
class TwoDShape{
    private:
        double width, height;

        // add a name field
        char name[20];

    public:
        // Default constructor 
        TwoDShape(){
            width = height = 0.0;
            strcpy(name, "unknown");
        }

        // Constructor for TwoDShape.
        TwoDShape(double w, double h, char *n){
            width = w;
            height = h;
            strcpy(name, n);
        }

        // Construct object with equal width and height.
        TwoDShape(double x, char *n){
            width = height = x;
            strcpy(name, n);
        }


        void showDim(){
            cout << "Width and heigth are " << width << " and " << height << "\n";
        }


        // accessor/getter functions
        double getWidth() { return width; }
        double getHeight() { return height; }


        // setter functions
        void setWidth( double w ) { width  = w; }
        void setHeight( double h ) { height = h; }
        char *getName(){ return name; }


        // Add area() to TwoDShape and make it virtual.
        virtual double area(){
            cout << "Error: area() must be overridden.\n";

            return 0.0;
        }

};

// Triangle is derived from TwoDShape
class Triangle : public TwoDShape{
    private:
        char style[20]; // now private

    public:
        /* A default constructor. This automatically invokes the default constructor of TwoDShape.*/
        Triangle(){
            strcpy(style, "unknown");
        }

        // Constructor with three parameters 
        Triangle(char *str, double w, double h) : TwoDShape(w, h, "triangle"){
            strcpy(style, str);
        }

        // Construct an isosceles triangle.
        Triangle(double x) : TwoDShape(x, "triangle"){
            strcpy(style, "isosceles");
        }

        // This now overrides area() declared in TwoDShape.
        double area(){
            return (getWidth() * getHeight()) / 2;
        } 

        
        void showStyle(){
            cout << "Triangle is " << style << "\n";
        }

};

// A derived class of TwoDShape for rectangles.
class Rectangle : public TwoDShape{
    private:
        //....

    public:
        // Construct a rectangle. 
        Rectangle(double w, double h) : TwoDShape(w, h, "rectangle"){ };

        // Construct a square.
        Rectangle(double x) : TwoDShape(x, "rectangle") {}

        
        bool isSquare(){
            if( getWidth() == getHeight() ) return true;
            return false; 
        }

        // This is another override of area().
        double area(){
            return getWidth() * getHeight(); 
        }
};


int main(){
    // ---  WRONG WAY (Old C++03 style, NOT allowed in modern C++) ---
    /*
    TwoDShape *shapes[5];
    
    // This creates a temporary Triangle object (lives only for this statement)
    // Then we try to take its address — which becomes invalid IMMEDIATELY.
    // Modern C++ forbids this: "taking address of rvalue" error.
    shapes[0] = &Triangle("right", 8.0, 12.0); 
    shapes[1] = &Rectangle(10); 
    shapes[2] = &Rectangle(10, 4);
    shapes[3] = &Triangle(7.0);
    shapes[4] = &TwoDShape(10, 20, "generic");

    // Even if it compiled, these pointers would point to DESTROYED objects.
    // Accessing them = undefined behavior.
    */

    // --- MODERN CORRECT WAY (C++11 and forward) ---
    // A base class pointer can point to a derived class object!
    TwoDShape *shapes[5];

    // Allocate each object dynamically with 'new'
    // These live until we explicitly delete them, so pointers remain valid.
    shapes[0] = new Triangle("right", 8.0, 12.0);
    shapes[1] = new Rectangle(10);
    shapes[2] = new Rectangle(10, 4);
    shapes[3] = new Triangle(7.0);
    shapes[4] = new TwoDShape(10, 20, "generic");

    for (int i = 0; i < 5; i++) {
        cout << "Object is " << shapes[i]->getName() << "\n";
        cout << "Area is " << shapes[i]->area() << "\n\n";
        delete shapes[i]; // cleanup
    }


    return 0; 
}