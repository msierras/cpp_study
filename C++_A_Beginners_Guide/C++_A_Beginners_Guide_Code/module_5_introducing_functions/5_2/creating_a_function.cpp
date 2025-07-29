// This program contains two functions: main() and myfunc().

#include <iostream>
using namespace std;

void myfunc();  // myfunc's prototype 

int main(){

    cout << "In main()\n";

    myfunc();   // call myfunc()

    cout << "Back in main()\n";


    return 0; 
}


// This is the function's definition
void myfunc(){  // function myfunc() has a void return type as it's only doing a cout. It has no parameters as well since the cout does not use any.
    cout << "Inside myfunc()\n";
} 