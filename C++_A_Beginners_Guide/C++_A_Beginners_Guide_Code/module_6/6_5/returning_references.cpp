#include <iostream>
using namespace std;



/* Function prototype(s)*/
double &f();    // returns a reference



/* Global variable(s)*/
double val = 100.0;



int main(){

    double x;

    cout << f() << "\n";    // display val's value

    x = f();    // assign value of val to x
    cout << x << "\n";  // display x's value

    f() = 99.1; // change val's value
    cout << f() << "\n";    // display val's new value



    return 0; 
}


double &f(){
    return val;
}