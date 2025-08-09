// Access private data through accessor functions.

#include <iostream>
#include <cstring>
using namespace std;


// A class for two-dimensional objects. 
// TwoDShape is base class in this program.
class TwoDShape{
    private:
    // these are private
    double width, height;

    public:
    /* Member function(s) */
    void showDim() { 
        cout << "Width and height are " << width << " and " << height << "\n";  
    }   

    /* Accessor function(s) */
    // getter(s)
    double getWidth() { return width; }
    double getHeight() { return height; }
    
    // setter(s)
    void setWidth(double w) { width = w; }
    void setHeight(double h) { height = h; }


};

// Triangle is derived from TwoDShape.
class Triangle : public TwoDShape{
    private:

    public:
        char style[20];

        double area(){
            return getWidth() * getHeight() / 2;  // Use the accessor functions to obtain width and height!
        }

        void showStyle(){
            cout << "Triangle is " << style << "\n";
        }
};


int main(){
    Triangle t1, t2;

    t1.setWidth(4.0);
    t1.setHeight(4.0);
    strcpy(t1.style, "isosceles");

    t2.setWidth(8.0);
    t2.setHeight(12.0);
    strcpy(t2.style, "right");


    return 0;
}