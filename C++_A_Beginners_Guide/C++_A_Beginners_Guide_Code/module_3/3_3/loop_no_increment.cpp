// A for loop with no increment.

#include <iostream>
using namespace std;

int main(){

    int x; 

    for(x=0; x !=123; ){    // no increment expression in this for loop!
        cout << "Enter a number: ";
        cin >> x;
    }

    return 0;
}
