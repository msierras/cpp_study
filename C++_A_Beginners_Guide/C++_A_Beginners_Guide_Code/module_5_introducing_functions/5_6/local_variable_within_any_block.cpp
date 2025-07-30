// Variables can be local to a block.

#include <iostream>
using namespace std;

int main(){

    int x = 19; // x is a known to all code. (otherwise know as a global variable)

    if(x == 19){
        int y = 20; // y is local to the if block (only exists within the if block)
        cout << "x +y is " << x + y << "\n";

    }

    // y = 100; // Error! y not known here. 


    return 0; 
}