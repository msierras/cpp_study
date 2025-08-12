// An example of multiple base classes.

#include <iostream>
using namespace std;

class B1{
    protected:
        int x;
    public:
    void showx() { cout << x << "\n"; }

};

class B2{
    protected:
        int y;
    public:
        void showy() { cout << y << "\n"; }  
};

// Inherit multiple base classes.
class D: public B1, public B2{ // <-- Here, D inherits both B1 and B2 at the same time, both with public access control.
    public:
        /* x and y are accessible because they are protected in B1 and B2, not private. */
        void set(int i, int j) { x = i; y = j;}
};


int main(){
    D ob;

    ob.set(10, 20); // provided by D
    ob.showx(); // from B1
    ob.showy(); // from B2


    return 0; 
}
