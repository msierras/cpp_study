#include <iostream>
using namespace std;

/* Function prototype(s)*/
void f(int *j); // f() declares a pointer parameter


int main(){

    int i;
    int *p;

    p = &i; // p now points to i

    f(p);   // passing argument pointer p to f()

    cout << i;  // i is now 100


    return 0; 
}


// f() receives the pointer to an int.
void f(int *j){
    *j = 100;   // var pointed to by j is assigned 100. 
}