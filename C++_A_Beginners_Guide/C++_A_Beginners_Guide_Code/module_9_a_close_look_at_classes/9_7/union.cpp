// Demonstrate a union.

#include <iostream>
using namespace std;

// Unions are public by default!
union u_type{ 


    // union data members share the same memory
    short int i;
    char ch[2];

    u_type(short int a) { i = a; }
    u_type(char x, char y) { ch[0] = x; ch[1] = y; }

    void showchars(){
        cout << ch[0] << " ";
        cout << ch[1] << "\n";
    }

};


int main(){
    u_type u(1000); 
    u_type u2('X', 'Y');
    
    cout << "u as integer: " << u.i << "\n";
    cout << "u as chars: ";
    u.showchars();

    cout << "u2 as integer: " << u2.i << "\n";
    cout << "u2 as chars: ";
    u2.showchars();

    return 0; 
}