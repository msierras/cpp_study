// Demonstrate new and delete.

#include <iostream>
#include <new>
using namespace std;


int main(){
    int *p;

    try{
        p = new int;    // allocate space for an aint
    }
    catch(bad_alloc xa){    // watch for an allocation failure
        cout << "Allocation Failure\n";
        return 1;
    }

    *p = 100;
    cout << "At " << p << " " << "is the value " << *p << "\n";

    delete p;   // release the allocated memory
    

    return 0; 
}