// A simple generic class.

#include <iostream>
using namespace std;


/* 
    The general form of a generic class declaration is shown here: 

    template <class Ttype> class class-name{
        // body of class
    }

    */
template <class T> class MyClass{
    private:
        T x, y; // variables x and y initialized with type T
    
    public:
        // Constructor(s)
        MyClass(T a, T b){
            x = a;
            y = b;
        }

        T div() { return x / y; }   // div() member function which returns x/y as type T
};


int main(){
    // Create a version of MyClass for doubles.
    MyClass<double> d_ob(10.0, 3.0);
    cout << "double division: " << d_ob.div() << "\n";

    // Create a version of MyClass for ints.
    MyClass<int> i_ob(10, 3);
    cout << "integer division: " << i_ob.div() << "\n";


    return 0; 
}