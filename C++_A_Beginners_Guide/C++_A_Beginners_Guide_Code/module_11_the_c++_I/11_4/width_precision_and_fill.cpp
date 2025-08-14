// Demonstrate width(), precision(), and fill().

#include <iostream>
using namespace std;


int main(){
    cout.setf(ios::showpos);
    cout.setf(ios::scientific);
    cout << 123 << " " << 123.23 << "\n";

    cout.precision(2);  // two digits after decimal point
    cout.width(10); // in a field of 10 characters 
    cout << 123 << " ";
    cout.width(10); // set width to 10
    cout << 123.23 << "\n";

    cout.fill('#'); // fill using #
    cout.width(10); // in a field of 10 characters
    cout << 123 << " ";
    cout.width(10); // set width to 10
    cout << 123.23;


    return 0; 
}