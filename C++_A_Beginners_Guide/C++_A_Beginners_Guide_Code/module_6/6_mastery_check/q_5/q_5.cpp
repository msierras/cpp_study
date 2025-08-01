/*
    Modify the reference version of swap() so that in addition to exchanging the values of its arguments, it returns
    a reference to the smaller of its two arguments. Call this function min_swap().

*/

#include <iostream>
using namespace std;



/* Function prototype(s)*/
// Declare swap() using pointers.
int &min_swap(int &x, int &y);



int main(){

    int i = 10, j = 20;

    cout << "Initial values of i and j: " << i << " " << j << '\n';

    int &minVal = min_swap(j, i);   // correct call; store returned reference

    cout << "Swapped values of i and j: " << i << " " << j << '\n';
    cout << "Smaller value (by reference): " << minVal << '\n';

    return 0; 
}


// Exchange values pointed to by x and y.
int &min_swap(int &x, int &y){
    int temp;

    temp = x;
    x = y;
    y = temp;

    if(x < y) return x;
    else return y;
}