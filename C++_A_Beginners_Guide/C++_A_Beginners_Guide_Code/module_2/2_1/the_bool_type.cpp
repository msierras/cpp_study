// Demonstrate bool values. 

#include <iostream>
using namespace std;

int main(){

    bool b;

    b = false;
    cout << "b is " << b << "\n";

    b = true;
    cout << "b is " << b << "\n";

    // a bool value can control the if statement 
    if(b){
        cout << "This is executed.\n";
    }

    b = false;
    if(b){
        cout << "This is not executed.\n";
    }

    // outcome of a relational operator is a true/false value
    cout << "10 > 9 is " << (10 > 9) << "\n";


    return 0;
}