// Now add f(short).

#include <iostream>
using namespace std;



/* Function prototype(s)*/
void f(int x);
void f(double x);
void f(short x);



int main(){

    int i = 10;
    double d = 10.1;
    short s = 99;
    float r = 11.5F;

    f(i);   // calls f(int)
    f(d);   // calls f(double)

    f(s);   // calls f(short) now since we added an f function that takes in a double type argument 
    f(r);   // although a float, will call f(double) -- type conversion



    return 0;
}


void f(int x){
    cout << "Inside f(int): " << x << "\n";
}


void f(double x){
    cout << "Inside f(double) " << x << "\n";
}


void f(short x){
    cout << "Inside f(short): " << x << "\n";
}