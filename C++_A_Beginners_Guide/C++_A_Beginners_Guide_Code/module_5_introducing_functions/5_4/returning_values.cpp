// Returning a value. 

#include <iostream>
using namespace std;

/* Functin prototypes*/

int box(int length, int width, int height); // prototype function box with int parameters length, width, height, and a return type of int.


int main(){

    int answer;

    answer = box(10, 11, 3);    // assigning return value to int variable answer. Keep in mind that functions can be stored in a variable with the same data type!
    cout << "The volume is: " << answer;


    return 0; 
}


// This function returns a value
int box(int length, int width, int height){
    return length*width*height;
}