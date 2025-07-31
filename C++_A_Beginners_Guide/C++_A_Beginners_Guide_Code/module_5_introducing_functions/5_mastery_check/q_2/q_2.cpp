/* 
    Create a function called hypot() that computes the length
    of the hypotenuse of a right triangle given the lengths of 
    the two opposing sides. Demonstrate its use in a program.
    For this problem, you will need to use the sqrt() standard library
    function, which returns the square root of its argument. It has 
    this prototype:
        double sqrt(double val);
    It uses the ehader <cmath>    
    The formula is c = sqrt(a^2 + b^2), where a and b are the 2 sides that are not the hypotenuse 
*/

#include <iostream>
#include <cmath>
using namespace std;

double hypot(double a, double b);

int main(){
    
    double perpendicular, base;
    perpendicular = 3.0;
    base = 9.0;

    cout << "The hypotenuse given perpendicular " << perpendicular << " and base " << 9.0 << " is " << hypot(perpendicular, base);


    return 0;
}


// Computes the length of the hypotenuse of a right triangle given the lengths of the two opposing sides
double hypot(double a, double b){
    return sqrt(pow(a,2.0) + pow(b,2.0));
}