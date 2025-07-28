#include <iostream>
using namespace std;

int main(){

    int i, j; 
    int sqrs[10][2] = {
        {1,1},
        {2,4},
        {3, 9},
        {4, 16},
        {5, 25},
        {6, 36},
        {7,49},
        {8,64},
        {9,81},
        {10, 100}
    };


    cout << "Enter a number between 1 and 10: ";
    cin >> i;

    // looking up i
    // this for loop gets the correct j that when at row 0 equals to i
    for(j=0; j<10; j++){
        if(sqrs[j][0]==i) break;
    }

    cout << "The square of " << i << " is " << sqrs[j][1];  // here, the sqrs already has the needed j because of the for previous for loop and the i is a 1 since that column contains the squared values of j.



    return 0; 
}