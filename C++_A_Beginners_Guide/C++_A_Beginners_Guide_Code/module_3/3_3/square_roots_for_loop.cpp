// Show square roots of 1 to 99.

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int num;
    double sq_root;

    for(num = 1; num < 100; num++){
        sq_root = sqrt((double) num); // Inside sqrt we use a cast to turn num into a double since sqrt requires input to be a double
        cout << num << " " << sq_root << "\n";
    }

    return 0;
}