// Demonstrate sizeof.

#include <iostream>
using namespace std;


int main(){
    char ch;
    int i;

    cout << sizeof ch << ' ';   // size of char
    cout << sizeof i << ' ';    // size of int
    cout << sizeof (float) << ' ';  // size of float
    cout << sizeof (double) << ' '; // size of double


    return 0;
}