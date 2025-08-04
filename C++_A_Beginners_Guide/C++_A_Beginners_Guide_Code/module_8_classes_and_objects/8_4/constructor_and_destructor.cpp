// A simple constructor and destructor. 

#include <iostream>
using namespace std;


class MyClass{
    public:
        int x;
        // Declare constructor and destructor
        MyClass();   // constructor
        ~MyClass(); // destructor


};


// Implement MyClass constructor.
MyClass::MyClass(){
    x = 10;
}

// Implement MyClass destructor.
MyClass::~MyClass(){
    cout << "Destructing...\n";
}


int main(){
    MyClass ob1;
    MyClass ob2;

    cout << ob1.x << " " << ob2.x << "\n";


    return 0; 
}