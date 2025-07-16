/*
    Project 1-2

    This program displays a conversion table of feet to meters.abort
    
    Call this program FtoMTable.cpp
*/

#include <iostream>
using namespace std;

int main(){
    double f; // holds the length in feet
    double m; // holds the conversion to meters
    int counter; 

    counter = 0;

    for(f = 1.0; f <= 100.0; f++){
        m = f / 3.28; // convert to meters
        cout << f << " feet is " << m << " meters.\n";

        counter++; 

        // every 10th line, print a blank line
        if(counter == 10){
            cout << "\n"; // output a blank line
            counter = 0; // reset the line counter
        }
    }


    return 0; 
}