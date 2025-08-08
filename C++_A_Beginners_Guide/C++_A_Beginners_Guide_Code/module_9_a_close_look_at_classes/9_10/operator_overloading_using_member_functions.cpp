// Define + and = for the ThreeD class.

#include <iostream>
using namespace std;


class ThreeD{
    private:
        int x, y, z;    // 3-D coordinates

    public:
        // constructor(s)
        ThreeD() { x=y=z=0; }
        ThreeD(int i, int j, int k) { x=i; y=j; z=k; }

        // operator(s)
        ThreeD operator+(ThreeD op2);   // op1 is implied, the object calling the operator function is the left operand.
        ThreeD operator=(ThreeD op2);   // op1 is implied, the object calling the operator function is the left operand.

        // class function prototype(s)
        void show();
};

// Overload +.
ThreeD ThreeD::operator+(ThreeD op2){   // Overload + for ThreeD
    ThreeD temp;  

    temp.x = x + op2.x; // These are integer additions
    temp.y = y + op2.y;  // and the + retains its original
    temp.z = z + op2.z; // meaning relative to them.
    return temp;    // Return a new object. Leave arguments unchanged.
}

// Overload = (assignment).
ThreeD ThreeD::operator=(ThreeD op2){   /// Overload = for ThreeD
    x = op2.x;  // These are integer assignments
    y = op2.y;  // and the = retains its original
    z = op2.z;  // meaning relative to them.
    return *this;   // Return the modified object.
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

    /* 
        add a and b together. Here, b is passed as the argument, so op2.x refers to the x in b and the regular x 
        refers to the one in a. The + operator from ThreeD is used ONLY WHEN two objects of type ThreeD are operated
        by the + operator. 
    */
    c = a + b;  
    cout << "Value of c after c = a + b: ";
    c.show();

    cout << "\n";

    c = a + b + c;  // add a, b, and c together
    cout << "Value of c after c = a + b + c: ";
    c.show();

    cout << "\n";

    c = b = a;  // demonstrate chained assignment
    cout << "Value of c after c = b = a: ";
    c.show();
    cout << "Value of b after c = b = a: ";
    b.show();


    return 0;
}