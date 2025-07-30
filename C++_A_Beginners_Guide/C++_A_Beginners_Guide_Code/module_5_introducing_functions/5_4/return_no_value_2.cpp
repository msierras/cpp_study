#include <iostream>
using namespace std;

/* Function prototypes*/

void power(int base, int exp);

int main(){

    power(10, 2);
    power(10, -2); 


    return 0; 
}


// Raise an integer to a positive power.
void power(int base, int exp){
    int i;

    if(exp <0) return;  /* Can't do negative exponents*/

    i = 1;

    for( ;exp; exp--) i = base * i; // the for loop basically says that while exp exists we do i = base * i. 
    cout << "The answer is: " << i;
}