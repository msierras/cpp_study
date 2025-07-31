#include <iostream>
using namespace std;



int main(){

    int j, k;
    int &i = j; // independent reference (note: an independent reference MUST be initialized to a value)

    j = 10;

    cout << j << " " << i;  // outputs 10 10 

    k = 121;
    i = k;  // copies k's value into j, not k's address
    
    cout << "\n" << j;  // outputs 121


    return 0;
}