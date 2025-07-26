/*
    Project 4-1
    Demonstrate the Bubble sort.
*/

#include <iostream>
using namespace std;

int main(){

    int nums[10];   // initialization of int type array with memory for 10 elements
    
    // initialization of int variables
    int a, b, t;  
    int size;     

    size = 10; // number of elements to sort 

    // give the array some random initial values 
    for(t=0; t<size; t++) nums[t] = rand();

    // displays original array
    cout << "Original array is:\n   ";
    for(t=0; t<size; t++) cout << nums[t] << " ";
    cout << "\n";


    /* The book starts from the right and goes left. It compares the right element to the left element and if 
    the right element is greater than the left element they switch places. */ 
    // Right-to-left bubble sort algorithm 
    // for(a=1; a<size; a++){
    //     for(b=size-1; b>=a; b--){
    //         if(nums[b-1] > nums[b]) {   // if out of order (if left element is greater than right element)
    //          // exchanges elements
    //          t = nums[b-1];
    //          nums[b-1] = nums[b];
    //          nums[b] = t;    
    //         }
    //     }
    // }


    // Making bubble sort start from left to right since its less confusing to me 
    // Left-to-right bubble sort algorithm 
    for(a=1; a<size; a++){
        for(b= 0 ; b < size - a; b++){
            if(nums[b] > nums[b+1]) {   // if out of order (if left element is greater than right element)
             // exchanges elements
             t = nums[b];
             nums[b] = nums[b+1];
             nums[b+1] = t;    
            }
        }
    }



    // display sorted array
    cout << "\nSorted array is:\n   ";
    for(t=0; t<size; t++) cout << nums[t] << " ";



    return 0; 
}