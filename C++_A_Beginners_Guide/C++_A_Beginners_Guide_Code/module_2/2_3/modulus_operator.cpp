// Demonstrates the modulus operator.

#include <iostream>
using namespace std;

int main(){

    int x, y;

    x = 10;
    y = 3; 
    cout << x << " / " << y << " is " << x / y << " with a remainder of " << x % y << "\n";

    x = 1;
    y = 2; 
    cout << x << " / " << y << " is " << x / y << "\n" << x << " % " << y << " is " << x % y;

    return 0;
}