// Using an operator 

#include <iostream>
using namespace std; 


int main (){
    int length;  // this declares a variable
    int width;   // this declares another variable
    int area;    // this does, too

    length = 7;   // this assigns 7 to length
    width = 5;    // this assigns 5 to width

    area = length * width; // compute area
    
    cout << "The area is ";
    cout << area; // this displays 35

    return 0; 
}