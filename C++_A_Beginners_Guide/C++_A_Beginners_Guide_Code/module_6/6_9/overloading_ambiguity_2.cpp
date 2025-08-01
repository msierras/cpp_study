#include <iostream>
using namespace std;


/* Function prototype(s)*/
char myfunc(unsigned char ch);
char myfunc(char ch);


int main(){

    cout << myfunc('c');    // this calls myfunc(char);
    cout << myfunc(88) << " ";  // Error, ambiguous! Should 88 be converted to char or unsigned char?


    return 0;
}


char myfunc(unsigned char ch){
    return ch-1;
}

char myfunc(char ch){
    return ch+1;
}