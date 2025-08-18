// Allocate an array of objects.

#include <iostream>
#include <new>
using namespace std;


class Rectangle{
    private:
        int width, height; 

    public: 
        /* Constructor(s) */
        
        // Default constructor 
        Rectangle(){ // To allocate an array of objects you MUST make sure that the default constructor will be parameterless
            width = height = 0; // You can have other constructors after making sure you have a parameterless one first.
            cout << "Constructing " << width << " by " << height << " rectangle.\n";
        }

        Rectangle(int w, int h){
            width = w;
            height = h;
            cout << "Constructing " << width << " by " << height << " rectangle.\n";
        }

        /* Destructor(s) */
        ~Rectangle(){
            cout << "Destructing " << width << " by " << height << " rectangle.\n";
        }


        /* Member function(s) */
        void set(int w, int h){
            width = w;
            height = h;
        }

        int area(){
            return width * height;
        }
};


int main(){
    Rectangle *p; 

    try{
        p = new Rectangle [3]; // Constructor is called for all 3 dynamically allocated Rectangle objects in the array 

    }
    catch(bad_alloc xa){
        cout << "Allocation Failure\n";
        return 1; 
    }

    cout << "\n";
    
    p[0].set(3, 4);
    p[1].set(10, 8);
    p[2].set(5, 6);

    for(int i = 0; i < 3; i++){
        cout << "Area is  " << p[i].area() << endl; // Because p is indexed as an array, the dot operator is used!
    }

    cout << "\n";

    delete [] p;    // This calls the destructor for each object in the array. 


    return 0; 
}


