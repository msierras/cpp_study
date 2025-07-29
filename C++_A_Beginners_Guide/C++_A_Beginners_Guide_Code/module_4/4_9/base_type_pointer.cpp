// This program will not work right.
#include <iostream>
using namespace std;

int main(){

    double x, y;
    int *p; 

    x = 123.23;
    p = (int *) &x; // use cast to assign double * to int *

    y = *p; // what will this do?
    cout << y;  // what will this print?

    /*
        Will print out 1.37439e+09, which is clearly not 123.23! Why does this happen?
        In the program, p (which is an integer pointer) has been assigned the address of x (which is a double).
        Thus, When y is assigned the value pointed to by p, y receives only four bytes of data
        (ant not the eight required for a double value), because p is an integer pointer.
    */
}