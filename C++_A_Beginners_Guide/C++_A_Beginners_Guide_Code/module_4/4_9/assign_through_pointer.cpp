#include <iostream>
using namespace std;

int main(){

    int *p, num;    // initialization of int pointer p, and int variable num

    p = &num; // pointer p points to the memory address of num

    *p = 100;   // At the memory address of num, assign the value 100
    cout << num << ' ';
    
    // incrementing the value p is pointing to by 1 
    (*p)++;
    cout << num << ' ';
    
    // decrementing the value p is pointing to by 1
    (*p)-- << num << '\n';
    cout << num << '\n';


    return 0;
}