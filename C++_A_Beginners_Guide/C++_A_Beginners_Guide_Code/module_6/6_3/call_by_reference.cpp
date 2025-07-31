#include <iostream>
using namespace std;



/* Function prototype(s)*/
// Declare swap() using pointers.
void swap(int *x, int *y);



int main(){

    int i, j;

    i = 10;
    j = 20;

    cout << "Initial values of i and j: ";
    cout << i << " " << j << '\n';

    swap(&j, &i);   // call swap() with addresses of i and j.

    cout << "Swapped values of i and j: ";
    cout << i << " " << j << "\n";

    return 0; 
}


// Exchange values pointed to by x and y.
void swap(int *x, int *y){
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}