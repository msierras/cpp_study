/*
    Compute the average and find the minumum
    and maximum of a set of values.
*/

#include <iostream>
using namespace std;

int main(){

    int avg, min_val, max_val;   // initialization of int variables
    int nums[10];   // initialization of an int array with size for 10 elements

    nums[0] = 10;
    nums[1] = 18;
    nums[2] = 75;
    nums[3] = 0;
    nums[4] = 1;
    nums[5] = 56;
    nums[6] = 100;
    nums[7] = 12;
    nums[8] = -19;
    nums[9] = 88;

    //compute the average
    avg = 0;
    for(int i=0; i<10; i++) avg += nums[i];

    avg /= 10;
    
    cout << "Average is " << avg << "\n";

    // finding the minimum and maximum values;
    min_val = max_val = nums[0];    // minimum/maximum values are initially the value of the first element

    for(int i = 0; i < 10; i++){
        if(nums[i] < min_val) min_val = nums[i];

        if(nums[i] > max_val) max_val = nums[i];
    }

    cout << "Minimum value: " << min_val << "\n";
    cout << "Maximum value: " << max_val << "\n";


    return 0; 
}