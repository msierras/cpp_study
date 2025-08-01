/*
    Automatic type conversion can affect 
    overloaded function resolution.
*/

#include <iostream>
using namespace std;



/* Function prototype(s)*/
void f(int x);
void f(double x);



int main(){

    int i = 10;
    double d = 10.1;
    short s = 99;
    float r = 11.5F;

    f(i);   // calls f(int)
    f(d);   // calls f(double)

    f(s);   // although is a short, will call f(int) -- type conversion
    f(r);   // although a float, will call f(double) -- type conversion



    return 0;
}



void f(int x){
    cout << "Inside f(int): " << x << "\n";
}


void f(double x){
    cout << "Inside f(double) " << x << "\n";
}
