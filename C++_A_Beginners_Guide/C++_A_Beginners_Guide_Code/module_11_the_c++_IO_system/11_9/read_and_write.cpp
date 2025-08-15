// Use read() and write().

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int n[5] = {1, 2, 3, 4 ,5}; // array of size 5 with 5 ints
    register int i; /* the register modifier tells the compiler to store a variable in such a way that it can 
                      be accessed as quickly as possible. The modifier register is commonly used in loops. 
                      NOTE: The register modified has been deprecated since C++ 11 and removed as a real 
                      feature in C++ 17. The reason is that compilers are so good at optimization that the
                      register modifier has no real use anymore. */

    ofstream out ("test", ios::out | ios::binary);
    if(!out){
        cout << "Cannot open file.\n";
        return 1;
    }

    out.write( (char *) &n, sizeof n);  // Write a block of data.
    
    out.close();

    for(i = 0; i < 5; i++){ // clear array
        n[i] = 0;
    }

    ifstream in("test", ios::in | ios::binary); 
    if(!in){
        cout << "Cannot open file.\n";
        return 1;
    }
    in.read( (char *) &n, sizeof n);    // Read a block of data

    for(i = 0; i < 5; i++){ // show values read from file 
        cout << n[i];
    }

    in.close();


    return 0 ;
}