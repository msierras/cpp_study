// Lowercase letters using bitwise OR.

#include <iostream>
using namespace std;


int main(){
    char ch;

    for(int i=0; i < 10; i++){
        ch = 'A' + i;
        cout << ch;

        // This statement turns on the 6th bit.
        ch = ch | 32;   // ch is now lowercase.

        cout << ch << "  ";
    }

    cout << "\n";


    return 0;
}