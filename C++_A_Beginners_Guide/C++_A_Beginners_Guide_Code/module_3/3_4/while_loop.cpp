/*
    This program displays all printable characters,
    including the extended character set, if one exists.
*/

#include <iostream>
using namespace std;

int main(){

    unsigned char ch;

    ch = 32;
    while(ch){ // while ch between 0 and 255
        cout << ch;
        ch++; 
    }


    return 0;
}