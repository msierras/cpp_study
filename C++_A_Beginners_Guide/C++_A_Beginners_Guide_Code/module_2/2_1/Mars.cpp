/*
    Project 2-1
    
    Talking to Mars
*/

#include <iostream>
using namespace std;

int main(){

    // variables used in program
    double distance, lightspeed, delay, delay_in_min;


    // distancce and lightspeed initial values 
    distance = 34000000.0; // 34,000,000 miles
    lightspeed = 186000;   // 186,000 per second 


    delay = distance / lightspeed;
    cout << "Time delay when talking to Mars: " << delay << " seconds.\n";


    delay_in_min = delay / 60;
    cout << "This is " << delay_in_min << " minutes.";


    return 0; 
}