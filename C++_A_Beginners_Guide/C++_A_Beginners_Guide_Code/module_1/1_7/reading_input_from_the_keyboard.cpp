/* 
        An interactive program that computes the area of a rectangle 
*/

#include <iostream>
using namespace std;

int main(){
    int length; // this declares a variable
    int width;  // this declares another variable

    cout << "Enter the length: ";
    cin >> length; // input the length

    cout << "Enter the width: "; 
    cin >> width; // input the width
    
    cout << "The area is: ";
    cout << length * width; // display the area 



    return 0;
}