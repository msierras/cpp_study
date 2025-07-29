#include <iostream>
using namespace std;

int main(){

    int *i, j[10];  // initialization of int pointer i and int array j with space for 10 elements
    double *f, g[10];   // initialization of double pointer and double array g with space for 10 elements 
    int x;

    i = j;  // pointer i points to memory address of j
    f = g;  // poitner f points to memory address of g

    for(x=0; x<10; x++) cout << i + x << ' ' << f+x << '\n';

    return 0; 
}