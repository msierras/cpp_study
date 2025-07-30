#include <iostream>
using namespace std;

/* Function prototype(s)*/
void f(int *j); // f() declares a pointer parameter


int main(){

    int i;

    f(&i);   // no need for p. The address of i i s passsed directly. 

    cout << i;  // i is now 100


    return 0; 
}


// f() receives the pointer to an int.
void f(int *j){
    *j = 100;   // var pointed to by j is assigned 100. 
}