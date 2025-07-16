#include <iostream>
using namespace std;

int main(){

    int x, y; // initialization of loop control variables 

    for(x=0,  y=10; x <=y; ++x, --y){
        cout << x << ' ' << y << "\n";
    }

    return 0; 
}