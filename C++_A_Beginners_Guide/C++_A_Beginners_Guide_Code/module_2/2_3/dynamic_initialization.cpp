// Demonstrate dynamic initialization. 

#include <iostream>
using namespace std;


int main(){

    double radius = 4.0, height = 5.0;

    //dynamically initialize radius 
    double volume = 3.1416 * radius * radius *height; // volume is dynamically initialized at runtime.

    cout << "Volume is " << volume; 

    return 0; 
}