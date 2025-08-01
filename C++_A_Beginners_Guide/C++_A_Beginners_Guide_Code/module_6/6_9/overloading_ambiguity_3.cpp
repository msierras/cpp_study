// More function overloading ambiguity. 

#include <iostream>
using namespace std;


/* Function prototype(s) */
int myfunc(int i);
int myfunc(int i, int j=1);


int main(){

    cout << myfunc(4,5) << " ";  // unambiguous
    cout << myfunc(10); // Error, ambiguous! Here, is i defaulting or the single-parameter version of myfunc() being invoked?


    return 0;
}


int myfunc(int i){
    return i;
}