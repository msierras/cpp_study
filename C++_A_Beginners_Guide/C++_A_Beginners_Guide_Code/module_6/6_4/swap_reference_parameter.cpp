#include <iostream>
using namespace std;



/* Function parameter(s)*/
void swap(int &x, int &y);


int main(){

    int i, j;

    i = 10;
    j = 20;

    cout << "Initial values of i and j: " << i << " " << j << "\n";

    swap(j, i);

    cout << "Swapped values of i and j: " << i << " " << j;



    return 0;
}


void swap(int &x, int&y){
    int temp;

    temp = y;
    y = x;
    x= temp;
}