// Demonstrate prefix and postfix ++.

#include <iostream>
using namespace std;


class ThreeD{
    private:
        int x, y, z;    // 3-D coordinates

    public:
        // constructor(s)
        ThreeD() { x=y=z=0; }
        ThreeD(int i, int j, int k) { x=i; y=j; z=k; } 

        // overloading operator(s) prototype(s)
        ThreeD operator++();    // prefix version of ++
        ThreeD operator++(int notused); // postfix version of ++

        // member function prototype(s)
        void show();
};

// Overload the prefix version of ++.
ThreeD ThreeD::operator++(){    // Overload ++ for ThreeD
    x++;    // increment x, y, and z
    y++;
    z++;
    return *this;   // Return the incremented object
}

// Overload the postfix version of++. 
/* 
    Keep in mind that the normal meaning of a postfix increment is to first obtain 
    the value of the operand, and then to increment the operand. Therefore, it is necessary to save the 
    current state of the operand and return its original value, before it is incremented, rather than its 
    modified value
*/
ThreeD ThreeD::operator++(int notused){
    ThreeD temp = *this;    // save original values

    x++;    // increment x, y, and z
    y++;
    z++;
    return temp;    // return origina value
}

// Show X, Y, Z coordinates
void ThreeD::show(){
    cout << x << ", ";
    cout << y << ", ";
    cout << z << "\n";
}


int main(){
    ThreeD a(1, 2, 3);
    ThreeD b;

    cout << "Original value of a: ";
    a.show();

    ++a;    // prefix increment. Calls prefix increment function.
    cout << "Value after ++a: ";
    a.show();

    a++;    // postfix increment. Calls postfix increment function.
    cout << "Value after a++: ";
    a.show();

    cout << "\n";

    b = ++a;    // b receives a's values after increment 
    cout << "Value of a after b = ++a: ";
    a.show();
    cout << "Value of b after b = ++a: ";
    b.show();

    cout << "\n";

    b = a++;    // b receives a's value prior to increment 
    cout << "Value of a after b = a++: ";
    a.show();
    cout << "Value of b after b = a++: ";
    b.show();
    

    return 0;
}