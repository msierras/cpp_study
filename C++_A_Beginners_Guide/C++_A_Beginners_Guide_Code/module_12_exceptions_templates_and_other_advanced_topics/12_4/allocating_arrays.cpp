// Allocate an array

#include <iostream>
#include <new>
using namespace std;



int main(){
    int *p, i;

    try{ /* NOTE: When allocating arrays we're not allowed to initialize it with values! */
        p = new int [10];   // allocate 10 integer array
    }
    catch(bad_alloc xa){
        cout << "Allocation failure.\n";
        return 1;
    }

    for(i = 0; i < 10; i++) p[i] = i;

    for(i = 0; i < 10; i++) cout << p[i] << " "; 

    delete [] p;    // release the array


    return 0; 
}