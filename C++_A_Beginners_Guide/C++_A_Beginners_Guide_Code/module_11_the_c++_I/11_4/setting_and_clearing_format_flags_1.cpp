// Use setf().

#include <iostream>
using namespace std;



int main(){
    // Turn on showpos and scientific flags.
    cout.setf(ios::showpos);
    cout.setf(ios::scientific);

    cout << 123 << " " << 123.23 << " ";


    return 0; 
}