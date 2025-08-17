#include <iostream>
using namespace std;

int main(){
    cout << "start\n";

    try{    // start a try block
        cout << "Inside try block\n";
        throw 99;   // throw an error
        cout << "This will not execute";
    }
    catch(int i){
        cout << "Caught an exception -- value is: " << i << "\n";
    }


    return 0;
}