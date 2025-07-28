// A simple computerized telephone directory
#include <iostream>
#include <cstdio>
// BOOK FORGOT TO ADD cstring TO HEADER!
#include <cstring>
using namespace std;

int main(){

    int i; 
    char str[80];   // initialization of a char array which can hold 79 characters 
    char numbers[10][80]{
        "Tom", "555-3322",
        "Mary", "555-8976",
        "Jon", "555-1037",
        "Rachel" , "555-1400",
        "Sherry", "555-8873"
    };

    cout << "Enter name: ";
    cin >> str;

    for(i=0; i < 10; i += 2){
        if(!strcmp(str, numbers[i])){
            cout << "Numer is " << numbers[i + 1] << "\n";
            break;
        }
    }

    if(i == 10) cout << "Not found.\n";


    return 0; 
}