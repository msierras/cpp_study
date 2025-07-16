// Declare loop control variable inside the for.

#include <iostream>
using namespace std;

int main(){

    int sum = 0;
    int fact = 1;

    //compute the factorial of the numbers through 5
    for(int i = 1; i <= 5; i++){
        sum += i;   // i is known throughout the loop
        fact *= i;
    }

    // but, i is not known here.
    
    cout << "Sum is " << sum << "\n";
    cout << "Factorial is " << fact;

    return 0;
}