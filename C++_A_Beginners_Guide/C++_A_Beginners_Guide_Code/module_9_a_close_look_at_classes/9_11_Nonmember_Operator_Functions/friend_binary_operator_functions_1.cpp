// Use friend operator functions.

#include <iostream>
using namespace std;


class ThreeD{
    private:
        int x, y, z;    // 3-D coordinates
    public:
        /* Constructor(s) */
        ThreeD() { x=y=z=0; }
        ThreeD(int i, int j, int k) { x=i; y=j; z=k; }

        /* Friend overloading operator function(s) */
        // For friend overloading operator functions you MUST have both operators in the parameter 
        // since friend functions are not allowed to use the keyword this.
        friend ThreeD operator+(ThreeD op1, ThreeD op2); 

        // Function member prototype(s)
        void show();

};

// The + is now a friend function.
ThreeD operator+(ThreeD op1, ThreeD op2){
    ThreeD temp;

    temp.x = op1.x + op2.x;
    temp.y = op1.y + op2.y;
    temp.z = op1.z + op2.z;
    return temp;
}

// Show X, Y, Z coordinates.
void ThreeD::show(){
    cout << x << ", ";
    cout << y << ", ";
    cout << z << "\n";
}


int main(){
    ThreeD a(1, 2, 3), b(10, 10, 10), c;

    cout << "Original value of a: ";
    a.show();
    cout << "Original value of b: ";
    b.show();

    cout << "\n";

    c = a + b;  // add a and b together
    cout << "Value of c after c = a + b: ";
    c.show();

    cout << "\n";

    c = a + b + c;  // add a, b, and c together
    cout << "Value of c after c = a + b + c: ";
    c.show();
    
    cout << "\n";

    c = b = a;  // demonstrate multiple assignments
    cout << "Value of c after c = b = a: ";
    c.show();
    cout << "Value of b after c = b = a: ";
    b.show();


    return 0;
}