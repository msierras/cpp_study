// Add a constructor to the vehicle class.

#include <iostream>
using namespace std;


// Declare the Vehicle class
class Vehicle{
    public:
        int passengers;
        int fuelcap;
        int mpg;


        /* Class member function(s)*/

        // This is a constructor for Vehcile.
        Vehicle(int p, int f, int m);

        int range();    // compute and return the range
};

// Implement the Vehicle constructor.
Vehicle::Vehicle(int p, int f, int m){
    passengers = p;
    fuelcap = f;
    mpg = m;
};

// Implement the range member function.
int Vehicle::range(){
    return mpg*fuelcap;
}


int main(){
    // Pass values to Vehicle constructor.
    Vehicle minivan(7, 16, 21);
    Vehicle sportscar(2, 14, 12);

    int range1, range2;

    // Compute the ranges assuming a full tank of gas.
    range1 = minivan.range();
    range2 = sportscar.range();

    cout << "Minivan can carry " << minivan.passengers << " with a range of " << range1 << "\n";

    cout << "Sportscar can carry " << sportscar.passengers << " with a range of " <<  range2 << "\n";


    return 0;
}