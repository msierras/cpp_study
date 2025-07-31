#include <iostream>
using namespace std;



/* Funciton prototype(s)*/
void f(int &i); // here, i is a reference parameter, meaning that the parameter takes the memory address of the argument



int main(){

    int val = 1;

    cout << "Old value for val: " << val << "\n";

    f(val); // passing address of val to f()

    cout << "New value for val: " << val << "\n";


    return 0;
}


void f(int &i){
    i = 10; // this modifies calling argument since the parameter has the memory address of the argument.
}