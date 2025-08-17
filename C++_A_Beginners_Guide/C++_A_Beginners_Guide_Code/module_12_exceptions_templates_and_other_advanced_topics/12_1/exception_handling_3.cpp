/* Throwing an exception from a function called from within a try block. */

#include <iostream>
using namespace std;

void Xtest(int test){
    cout << "Inside Xtest, test is: " << test << "\n";
    if(test) throw test;    // this exception is caught by the catch stateent in main(). if test is non-zero 
}


int main(){
    cout << "start\n";

    try{    // start a try block
        cout << "Inside try block\n";
        /* Because Xtest() is called from within a try block,
        its code is also monitored for errors. */
        Xtest(0);
        Xtest(1);
        Xtest(2);

    }
    catch(int i){   // catch an error
        cout << "Caught an exception -- value is: " << i << "\n";
    }

    cout << "end";


    return 0; 
}