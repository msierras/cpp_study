// Changing a call-by-value parameter does not affect the argument.

#include <iostream>
using namespace std;

/* Function prototype(s)*/
double reciprocal(double x);


int main(){

    double t = 10.0;

    cout << "Reciprocal of 10.0 is " << reciprocal(t) << "\n";

    cout << "Value of t is still: " << t;


    return 0; 
}


double reciprocal(double x){
    x = 1 / x;  // this does not change the value of t inside main()

    return x;
}