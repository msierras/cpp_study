// Defines constructor, destructor, and range() function in-line.

#include <iostream>
using namespace std;


// Declare the Vehicle class.
class Vehicle{
    // These are now private.
    int passengers; // number of passsengers.
    int fuelcap;    // fuel capacity in gallons
    int mpg;    // fuel consumption in miles per gallon

    public:
        // This is an in-line constructor for Vehicle.
        Vehicle(int p, int f, int m){
            passengers = p;
            fuelcap = f;
            mpg = m;
        }

        // Compute and return the range.
        int range() { return mpg*fuelcap; }

        // Accessor functions.
        int get_passengers() { return passengers; }
        int get_fuelcap() { return fuelcap; }
        int get_mpg() { return mpg; }
};


int main(){
    // Pass values to Vehicle constructor.
    Vehicle minivan(7, 16, 21);
    Vehicle sportscar(2, 14, 12);

    int range1, range2;

    // Compute the ranges assuming a full tank of gas.
    range1 = minivan.range();
    range2 = sportscar.range();

    cout << "Minivan can carry " << minivan.get_passengers() << " with a range of " << range1 << "\n";

    cout << "Sportscar can carry " << sportscar.get_passengers() << " with a range of " << range2 << "\n";




    return 0; 
}