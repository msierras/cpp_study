// Allocate an object

#include <iostream>
#include <new>
using namespace std;


class Rectangle{
    private:
        int width, height;
    
    public:
        /* Constructor(s) */
        Rectangle(int w, int h){
            width = w;
            height = h; 
            cout << "Constructing " << width << " by " << height << " rectangle.\n";
        }

        /* Destructor */
        ~Rectangle(){
            cout << "Destructing " << width << " by " << height << " rectangle.\n";
        }

        /* Class function(s) */
        int area(){
            return width * height;
        }


};


int main(){
    Rectangle *p;

    try{
        p = new Rectangle(10, 8);   // Allocate a Rectangle object. This calls the Rectangle constructor. 
    }
    catch(bad_alloc xa){
        cout << "Allocating Failure\n";
        return 1;
    }

    cout << "Area is " << p->area();    // using -> since p is a pointer, same as doing (*p).area() 

    cout << "\n";

    delete p;   // Release the object. This calls the Rectangle destructor.


    return 0;
}