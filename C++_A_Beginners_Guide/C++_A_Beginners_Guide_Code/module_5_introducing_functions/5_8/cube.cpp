// Change the contnets of an array using a function.

#include <iostream>
using namespace std;

/* Function prototype(s) */
void cube(int *n, int num);

int main(){

    int i, nums[10];

    for(i=0; i<10; i++) nums[i] = i + 1;

    cout << "Original contents: ";
    for(i=0; i<10; i++) cout << nums[i] << " ";
    cout << "\n";

    cube(nums, 10); // compute cubes. Passing address of nums to cube()

    cout << "Altered contents: ";
    for(i=0; i<10; i++) cout << nums[i] << " ";


    return 0; 
}


//Cube the elements in an array.
void cube(int *n, int num){
    while(num){
        *n = *n  *  *n  *  *n;
        num--;
        n++;
    }
}