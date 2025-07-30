#include <iostream>
using namespace std;

/* Function prototype(s)*/
void display_v1(int num[10]);

void display_v2(int num[]);

void display_v3(int *num); 



int main(){
    
    int t[10], i;

    for(i=0; i<10; i++) t[i]=i;

    display_v1(t); // pass array t to a function

    display_v2(t);

    display_v3(t);


    return 0; 
}



// Print some numbers.
void display_v1(int num[10]){
    int i;

    for(i=0; i<10; i++) cout << num[i] << " ";

    cout << "\n";
}


//
void display_v2(int num[]){
    int i;

    for(i=0; i<10; i++) cout << num[i] << " ";

    cout << "\n";
}


// 
void display_v3(int *num){
    int i;

    for(i=0; i<10; i++) cout << num[i] << " ";

    cout << "\n";
}