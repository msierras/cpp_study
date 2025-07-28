#include <iostream>
using namespace std;

int main(){

    int total;  // initialization of an integer variable with name total
    int *ptr;   // initialization of pointer ptr that can point to integers
    int val;    // initialization of an integer variable with name val

    total = 3200;   // assign 3,200 to total
    
    ptr = &total;   // getting address of total and assigning to poitner ptr. ptr is pointing to memory address of total
    
    val = *ptr;     // gets value that is at address which ptr is pointing to 

    cout << "Total is: " << val << "\n";


    return 0; 
}