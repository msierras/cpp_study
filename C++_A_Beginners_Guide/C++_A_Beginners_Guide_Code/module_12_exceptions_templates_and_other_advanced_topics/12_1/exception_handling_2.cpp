// This example will not work.

#include <iostream>
using namespace std;

int main(){
    cout << "start\n";

    try{    // start a try block
        cout << "Inside try block\n";
        throw 99;   // throw an error
        cout << "This will not execute";
    }
    catch(double i){    // won't work for an int exception. throw and catch must be of the same type!
        cout << "Caught an exception -- value is: " << i << "\n";
    }


    return 0;
}