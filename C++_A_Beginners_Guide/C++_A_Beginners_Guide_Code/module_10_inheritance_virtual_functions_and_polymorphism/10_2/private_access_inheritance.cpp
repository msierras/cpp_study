// Demonstrate public inheritance.

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

// Class D is the derived class and B is inherited with public access control.
class D : public B{
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

    ob.set(1, 2);   // access member of base class 
    ob.show();  // access member of base class

    ob.showk(); // uses member of derived class


    return 0;
}