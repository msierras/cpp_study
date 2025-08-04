// An alternate initialization method.

#include <iostream>
using namespace std;


class MyClass{
    public:
        int x;
        // Declare constructor and destructor
        MyClass(int i);   // constructor
        ~MyClass(); // destructor


};


// Implement MyClass constructor.
MyClass::MyClass(int i){
    x = i;
}

// Implement MyClass destructor.
MyClass::~MyClass(){
    cout << "Destructing object whose x valuse is " << x << "\n";
}


int main(){
    MyClass ob = 5; // calls MyClass(5)

    cout << ob.x << "\n";


    return 0; 
}