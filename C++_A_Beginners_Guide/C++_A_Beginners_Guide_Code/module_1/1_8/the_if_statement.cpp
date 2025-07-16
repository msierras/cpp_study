// Demonstrate the if.

#include <iostream>
using namespace std;

int main(){
    int a, b, c;

    a = 2;
    b = 3;

    if(a < b){
        cout << "a is less than b\n";
    }

    // this won't display anything 
    if(a == b){
        cout << "you won't see this\n";
    }

    cout << "\n";

    c = a - b; // c contains -1
    cout << "c contains -1\n";
    if(c >= 0 ){
        cout << "c is non-negative\n";
    }
    if(c < 0){
        cout << "c is negative\n";
    }

    cout << "\n";

    c = b - a; // c now contains 1
    cout << "c contains 1\n";
    if( c >= 0){
        cout << "c is non-negative";
    }
    if(c < 0){
        cout << "c is negative\n";
    }


    return 0;
}