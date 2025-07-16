/*
    Use the Pythagorean theorem to find
    the length of the hypotenuse given
    the lengths of the two opposing sides. 
*/

#include <iostream>
#include <cmath> // The <cmath> header is needed for the sqrt() function. 
using namespace std;

int main(){

    double x,y,z;

    x = 5.0;
    y = 4.0;

    z = sqrt(x*x + y*y); 

    cout << "Hypotenuse is: " << z ;
    
    
    return 0; 
}