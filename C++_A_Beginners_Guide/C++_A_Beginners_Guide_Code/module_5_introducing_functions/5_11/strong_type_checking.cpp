#include <iostream>
using namespace std;

/* Function prototype(s)*/
void sqr_it(int *i);


int main(){

    int x;

    x = 10;
    sqr_it(x);  // Erorr! Type mismatch! The prototype prevents parameter type mismatcches. Here, sqr_it() is expecting a pointer but is called with an integer.


    return 0; 
}


void sqr_it(int *i){
    *i = *i  *  *i;
}