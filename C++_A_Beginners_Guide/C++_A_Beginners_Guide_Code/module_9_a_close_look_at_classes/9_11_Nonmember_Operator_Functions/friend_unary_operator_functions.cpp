/* Overload prefix ++ using a friend function.
    This requires the use of a reference parameter. */

#include <iostream>
using namespace std;

class ThreeD{
    private:
        int x, y, z;    // 3-D coordinates
    public:
        /* Constructor(s) */
        ThreeD() { x=y=z=0; }
        ThreeD(int i, int j, int k) { x=i; y=j; z=k; }

        /* Friend unary operator ++ (prefix and postfix) */
        friend ThreeD operator++(ThreeD &op1); 
        friend ThreeD operator++(ThreeD &op1, int notused); 
        
        // Function member prototype(s)
        void show();

};

void ThreeD::show(){
    cout << x << ", ";
    cout << y << ", ";
    cout << z << "\n";
}

// prefix ++ 
ThreeD operator++(ThreeD &op1){
    op1.x++;
    op1.y++;
    op1.z++;
    return op1;
}

ThreeD operator++(ThreeD &op1, int notused){
    ThreeD temp = op1;

    op1.x++;
    op1.y++;
    op1.z++;
    return temp;
}

int main(){
    ThreeD a;
    ThreeD b;

    cout << "Original values of a: ";
    a.show();
    a++;
    cout << "Value of a after a++: ";
    a.show();

    cout << "\n";

    cout << "Original values of b: ";
    b.show();
    ++b;
    cout << "Value of b after ++b ";
    b.show();

    return 0;
}