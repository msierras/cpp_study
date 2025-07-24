/*
    Show the for statement for a loop that counts from 1000 to 0 by -2.
*/

#include <iostream>
using namespace std;

int main(){

    // initializing int i at 1000, conditional checks if i is greater than or equal to 0,
    // if true, decrement i by. After doing the aforementioned, we cout the current i and 
    // add a newline. 
    for(int i=1000; i>= 0; i = i-2){
        cout << i << "\n";
    }


    return 0; 
}