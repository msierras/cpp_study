// Print a string backwards using recursion.

#include <iostream>
using namespace std;

/* Function prototype(s)*/
void reverse(char *s);


int main(){

    char str[] = "This is a test";
    cout << "Original string: " << str << "\n";

    cout << "Reversed string: ";
    reverse(str);


    return 0; 
}


// Print string backwards
void reverse(char *s){  
    if(*s) reverse(s+1); // while *s char is non-null, move pointer to next char.
    else return;    // base case    

    // once *s char is null, the chars are returned in reverse 
    cout << *s;
}
