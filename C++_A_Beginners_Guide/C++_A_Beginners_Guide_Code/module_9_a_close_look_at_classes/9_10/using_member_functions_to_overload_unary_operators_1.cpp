// Overload the ++ unary operator.

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

// Show X, Y, Z coordinates
void ThreeD::show(){
    cout << x << ", ";
    cout << y << ", ";
    cout << z << "\n";
}


int main(){
    ThreeD a(1, 2, 3);

    cout << "Original value of a: ";
    a.show();

    ++a;    // increment a
    cout << "Value after ++a: ";
    a.show();
    

    return 0;
}