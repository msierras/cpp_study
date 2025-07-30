/*
    A local variable is initialized each
    time its block is entered.
*/

#include <iostream>
using namespace std;

/* Function prototype(s)*/

void f();

int main(){

    for(int i = 0; i < 3; i++) f();


    return 0; 
}


// num is initialized each time f() is called.
void f(){

    int num = 99;   // num is set to 99 each time f() is called.

    cout << num << "\n";

    num++;  // this has no lasting effect!

}