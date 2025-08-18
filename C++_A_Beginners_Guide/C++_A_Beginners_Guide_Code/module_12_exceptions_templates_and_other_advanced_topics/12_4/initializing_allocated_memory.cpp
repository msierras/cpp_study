// Initialize memory.

#include <iostream>
#include <new>
using namespace std;


int main(){
    int *p;

    try{
        p = new int (87);    // initialize 87 to allocated memory
    }
    catch(bad_alloc xa){    // watch for an allocation failure
        cout << "Allocation Failure\n";
        return 1;
    }

    cout << "At " << p << " " << "is the value " << *p << "\n";

    delete p;   // release the allocated memory
    

    return 0; 
}