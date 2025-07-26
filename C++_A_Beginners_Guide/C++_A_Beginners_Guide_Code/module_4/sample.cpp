#include <iostream>
using namespace std;

int main(){

    int sample[10]; // int type array containing 10 elements
    int t; 

    // loading the array
    for(t=0; t < 10; ++t){
        sample[t] = t;
    }

    // displaying the array
    for(t=0; t < 10; ++t){
        cout << "This is sample[" << t << "]: " << sample[t] << "\n";
    }

    return 0;
}