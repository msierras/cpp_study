// Use private inheritance. This program won't compile.

#include <iostream>
using namespace std;

// Class B is the base class 
class B{
    private:
        int i, j;

    public:
        void set(int a, int b) { i = a; j = b; }
        void show() { cout << i << " " << j << "\n";}

};

// Class D is the derived class and B is inherited with private access control.
class D : private B{
    private:
        int k;
    public:
        /* Constructor(s) */
        D(int x) { k = x;}

        /* Member function(s) */
        void showk() { cout << k << "\n"; }

        // i = 10;  // Error! i is private to B and access is not allowed. 
};


int main(){
    D ob(3);

    /* Class D inherited show() and set() from class B, but because we declared that class D inherits class B with the private
        access control this makes the initially public set() and show() from class B change to private when being inherited
        to class D. So, when we try to call set() and show() from a class D object inside of main() we get an error since 
        the private show() and set() can only be used inside of class D.*/
    ob.set(1, 2);   // Error, can't access set()
    ob.show();  // Error, can't access show()



    return 0;
}