#include <iostream>
using namespace std;


// Access to private members is not granted to derived class!
// TwoDShape is base class in this program.
class TwoDShape{
    private:
    // these private variables won't be accessible to base class!
    double width, height;

    public:
    void showDim() { 
        cout << "Width and height are " << width << " and " << height << "\n";  
    }


};

// Triangle is derived from TwoDShape.
class Triangle : public TwoDShape{
    private:

    public:
        char style[20];

        double area(){
            return width * height / 2;  // Error! Can't access private members of a base class.
        }

        void showStyle(){
            cout << "Triangle is " << style< << "\n";
        }
};


int main(){




    return 0;
}