// Overloading ambiguity. 

#include <iostream>
using namespace std;


/* Function prototype(s)*/
float myfunc(float i);
double myfunc(double i);


int main(){

    // unambiguous, calls myfunc(double)
    cout << myfunc(10.1);   // in C++, unless explicitly specified as float, all floating-point constants are autoamtically of type double.

    // ambiguous
    cout << myfunc(10); // Error! Which version of myfunc() should this use? Compiler has no way of knowing if the integer should be converted to double or float!


    return 0; 
}


float myfunc(float i){
    return i;
}

double myfunc(double i){
    return -i;
}