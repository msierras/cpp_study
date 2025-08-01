// Use a const pointer parameter.

#include <iostream>
using namespace std;


/* Function prototype(s)*/
int negates(const int *val); // const int *val basically means "the object that val points to cannot be changed",
                             // or in general, you CANNOT assign a new value to the object!


int main(){

    int result;
    int v = 10;

    result = negates(&v);

    cout << v << " negated is " << result;
    cout << "\n";


    return 0; 
}


int negates(const int *val){
    return - *val;  // this is legal since we're not changing val but rather returning it times -1
}