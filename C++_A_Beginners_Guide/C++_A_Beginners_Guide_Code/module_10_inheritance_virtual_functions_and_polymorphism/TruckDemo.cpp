// Create a subclass of Vehicle called Truck.

#include <iostream>
using namespace std;


class Vehicle{
    private:
        int passengers;  // number of passengers.
        int fuelcap;    // fuel capacity in gallons.
        int mpg;    // fuel consumption in miles per gallon
    
    public:
        // This is a constructor for Vehicle.
        Vehicle(int p, int f, int m) {
            passengers = p;
            fuelcap = f;
            mpg = m;
        }

        // Compute and return the range.
        int range(){ return mpg * fuelcap; }

        // Accessor functions.
        int get_passengers() { return passengers; }
        int get_fuelcap(){ return fuelcap; }
        int get_mpg() { return mpg; }
};

// Use Vehicle to create a Truck specialization.
class Truck : public Vehicle{
    private:
        int cargocap;   // cargo capacity in pounds

    public:
        // This is a constructor for Truck.
        Truck(int p, int f, int m, int c) : Vehicle(p, f, m){
            cargocap = c;
        }

        // Accessor function for cargocap.
        int get_cargocap() { return cargocap; }


};

int main(){
    // construct some trucks
    Truck semi(2, 200, 7, 44000), pickup(3, 28, 15, 2000);
    int dist = 252;

    cout << "Semi can carry " << semi.get_cargocap() << " pounds.\n";
    cout << "It has a range of " << semi.range() << " miles.\n";
    cout << "To go " << dist << " miles semi needs " << dist/semi.get_mpg() << " gallons of fuel.\n\n";

    cout << "Pickup can carry " << pickup.get_cargocap() << " pounds.\n";
    cout << "It has a range of " << pickup.range() << " miles.\n";
    cout << "To go " << dist << " miles pickup needs " << dist/pickup.get_mpg() << " gallons of fuel.\n";




    return 0;
}