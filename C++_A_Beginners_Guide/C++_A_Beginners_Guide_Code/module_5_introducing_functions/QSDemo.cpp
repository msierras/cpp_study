/*
    Project 5-1
    A version of the Quicksort for sorting characters.
*/

#include <iostream>
#include <cstring>
using namespace std;


/* Function prototype(s)*/
void quicksort(char *items, int len);
void qs(char *items, int left, int right);


int main(){

    char str[] = "jfmckldoelazlkper";

    cout << "Original order: " << str << "\n";

    quicksort(str, strlen(str));

    cout << "Sorted order: " << str << "\n";


    return 0;
}


// Set up a call to the actual sorting function
void quicksort(char *items, int len){
    qs(items, 0, len-1);
}


// A recursive version of Quicksort for sorting charcaters. 
void qs(char *items, int left, int right){
    int i, j;
    char x, y;

    i = left;
    j = right;

    x = items[(left+right)/2];  // calculating the middle element of items and assigning it to x.

    do{
        while( (items[i] < x) && (i < right) ) i++;
        while( (x < items[j]) && (j > left) ) j--;

        if(i <= j){
            y = items[i];
            items[i] = items[j];
            items[j] = y;
            i++;
            j--;
        }

    }while(i <=j);

    if(left < j) qs(items, left, j);
    if(i < right) qs(items, i, right);

}