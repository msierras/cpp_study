// A program tha uses the Vehicle class.

#include <iostream>
using namespace std;


// Declare the Vehicle class.
class Vehicle{
    public:
        int passengers; // number of passengers
        int fuelcap;    // fuel capacity in gallons
        int mpg;    // fuel consumption in miles per gallon
        
        int range();    // compute and return the range. Declare the range() member function. 
};


// Implement the range member function.
// implementing a class member function takes the form int class::function-name(parameters){body};
int Vehicle::range(){   
    return mpg * fuelcap;
}


int main(){
    Vehicle minivan;    // create a Vehicle object
    Vehicle sportscar;  // create another object

    int range1, range2;

    // Assign values to fields in minivan.
    minivan.passengers = 7;
    minivan.fuelcap = 16;
    minivan.mpg = 21;

    // Assign values to fields in sportscar.
    sportscar.passengers = 2;
    sportscar.fuelcap = 14;
    sportscar.mpg = 12;

    // Compute the ranges assuming a full tank of gas.
    range1 = minivan.range();
    range2 = sportscar.range();

    cout << "Minivan can carry " << minivan.passengers << " with a range of " << range1 << '\n';
    cout << "Sportscar can carry " << sportscar.passengers << " with a range of " << range2 << "\n"; 

    return 0;
}