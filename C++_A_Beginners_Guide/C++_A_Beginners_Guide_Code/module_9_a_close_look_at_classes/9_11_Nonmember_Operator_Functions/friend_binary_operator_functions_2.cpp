// Overload for ( integer + object ) and ( object + integer )

#include <iostream>
using namespace std;


class ThreeD{
    private:
        int x, y, z;    // 3-D coordinates
    public:
        /* Constructor(s) */
        ThreeD() { x=y=z=0; }
        ThreeD(int i, int j, int k) { x=i; y=j; z=k; }


        // These allows ( ob + int ) and ( int + ob )
        friend ThreeD operator+(ThreeD op1, int op2);
        friend ThreeD operator+(int op1, ThreeD op2); 

        // Function member prototype(s)
        void show();

};

// This allows ( ob + int )
ThreeD operator+(ThreeD op1, int op2){
    ThreeD temp;

    temp.x = op1.x + op2;
    temp.y = op1.y + op2;
    temp.z = op1.z + op2;
    return temp;
}

// This allows ( int + ob )
ThreeD operator+(int op1, ThreeD op2){
    ThreeD temp;

    temp.x = op2.x + op1;
    temp.y = op2.y + op1;
    temp.z = op2.z + op1;
    return temp;
}

// Show X, Y, Z coordinates.
void ThreeD::show(){
    cout << x << ", ";
    cout << y << ", ";
    cout << z << "\n";
}


int main(){
    ThreeD a(1, 2, 3), b;

    cout << "Original value of a: ";
    a.show();

    cout << "\n";

    b = a + 10; // object + integer
    cout << "Value of b after c = a + 10: ";
    b.show();

    cout << "\n";

    b = 10 + a;  // integer + object 
    cout << "Value of b after c = 10 + a: ";
    b.show();


    return 0;
}