#include <iostream>
using namespace std;

int main(){

    int x, *p, **q; // *p is an int pointer and **q is an int pointer that points to the memory address that *p points to

    x = 10;
    
    p = &x; // Assigns p the address of x.

    q = &p; // Assigns q the address of p

    cout << **q << "\n"; // Prints the value of x.


    
    // What if I add another pointer r?

    int ***r;

    r = &q; // Assigns r the address of q

    cout << ***r; 


    return 0; 
}