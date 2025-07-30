// Use a function's definition as its prototype.

#include <iostream>
using namespace std;

// Determine if a number is even.
bool isEven(int num){
    if(!(num&2)) return true;   // num is even.
    return false;
}


int main(){

    if(isEven(4)) cout << "4 is even\n";
    if(isEven(3)) cout << "This wont display.";

    return 0;

}