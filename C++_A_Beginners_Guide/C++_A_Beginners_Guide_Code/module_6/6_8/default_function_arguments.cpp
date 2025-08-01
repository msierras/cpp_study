// Demonstrate default arguments.

#include <iostream>
using namespace std;


/* Function prototype(s)*/
void myfunc(int x = 0, int y = 100);    // myfunc() specifies default arguments for both parameters.


int main(){
    
    myfunc(1,2);

    myfunc(10);
    
    myfunc();


    return 0;
}

// // NOTE: default arguments are only declared in the function's prototype! Adding them here will caues an error!
void myfunc(int x, int y){  
    cout << "x: " << x << " y: " << y << "\n";
}