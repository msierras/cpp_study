// Create various versions of min().

#include <iostream>
using namespace std;



/* Function prototype(s)*/
int min(int a, int b);  // min() for ints
char min(char a, char b);   // min for chars
int *min(int *a, int *b);   // min() for int pointers



int main(){

    int i=10, j=22;

    cout << "min('X', 'a'): " << min('X', 'a') << "\n";
    cout << "min(9, 3): " << min(9, 3) << "\n";
    cout << "min(&i &j): " << *min(&i, &j) << "\n";


    return 0; 
}


// min() for ints. Return the smalles value.
int min(int a, int b){
    if(a<b) return a;
    else return b;
}


// min() for chars -- ignore case.
char min(char a, char b){
    if( tolower(a) < tolower(b) ) return a;
    else return b;
}


/*
    min() for pointers.
    Compare values and return pointer to smallest value

*/

int *min(int *a, int *b){
    if(*a < *b) return a;
    else return b;
}