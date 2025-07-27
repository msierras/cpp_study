// Using gets( ) to read a string from the keyboard.

#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    char str[80]; 

    cout << "Enter a string: ";
    gets(str); // read string from keyboard
    cout << "Here is your string: ";
    cout << str;


    return 0;
}