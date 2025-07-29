/*
    Project 4-2
    Reverse a string in place.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){ 

    char str[] = "this is a test";
    char *start, *end;  // initialization of pointers start and end that will point to a char object's memory address
    int len;
    char t;

    cout << "Original: " << str << "\n";

    len = strlen(str);  // getting the length of the str and storing it in int len
    
    start = str;    // start is the start first element of str
    end = &str[len-1];  // end is the last element of str

    while(start < end){
        // swap chars
        t = *start;
        *start = *end;
        *end = t;

        // advance pointers
        start++;
        end--;
    }

    cout << "Reversed : " << str << "\n";

    return 0;
}