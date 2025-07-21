/*
    Use nested loops to find factors of numbers between 2 and 100. 
*/

#include <iostream>
using namespace std;

int main(){

    for(int i=2; i <= 100; i++){
        cout << "Factors of " << i << ": ";

        for(int j=2; j<i; j++){
            if( (i%j) == 0 ){
                cout << j << " ";
            }

        }
    cout << "\n";
    }


    return 0; 
}