// Using return.

#include <iostream>
using namespace std;

/* Function prototypes*/

void f();   // prototype of function f() which returns no value


int main(){

    cout << "Before call\n";

    f();

    cout << "After call\n";


    return 0; 
}


// A void function that uses return.
void f(){
    cout << "Inside f()\n";

    return; // return to caller

    cout << "This wont't display.\n";
}