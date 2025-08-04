/* This program uses the ? operator to prevent a division by zero*/

#include <iostream>
using namespace std;


/* Function prototype(s) */
int div_zero();


int main(){
    int i, j, result;
    
    cout << "Enter dividend and divisor: ";
    cin >> i >> j;

    // This statement prevents a divide by zero error.
    result = j ? i/j: div_zero();    // Use the ? to prevent a divide-by-zero erro.

    /* 
        The code above is equivalent to the code below: 
            if(j) result = i/j;
            else div_zero()    
    */

    cout << "Result: " << result;

    return 0;
}


int div_zero(){
    cout << "Cannot divide by zero.\n";
    return 0;
}