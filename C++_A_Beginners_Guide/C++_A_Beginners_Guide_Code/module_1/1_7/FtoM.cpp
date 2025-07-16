/*
    Project 1-1

    This program convers feet to meters.

    Call this program FtoM.cpp
*/

#include <iostream>
using namespace std;


int main(){

    double meter; // holds the conversion to meters
    double feet;  // holds the length in feet

    cout << "Enter the length in feet: ";
    cin >> feet; // stores user input for feet into variable feet

    meter = feet / 3.28 ; // convert feet to meters
    cout << feet << " feet is " << meter << " meters." ;

    return 0; 
}