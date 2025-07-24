/*
    The increment expression in a for loop need not always alter the loop control variable by a fixed amount.
    Instead, the loop control variable can change in any arbitrary way. Using this concept, write a program that uses
    a for loop to generate and display the progression 1, 2, 4, 8, 16, 32, and so on.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    for(int i = 1; i <= 64; i *= 2){ // here, instead of i++ for increment we do i *= 2 
        cout << i << "\n";
    }

    return 0; 
}