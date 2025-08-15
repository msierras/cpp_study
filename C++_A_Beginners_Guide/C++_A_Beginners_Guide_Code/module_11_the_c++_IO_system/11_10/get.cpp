#include <iostream>
#include <fstream>
using namespace std;


int main(){
    char str[80];

    cout << "Enter your name: ";
    cin.get(str, 79);   //  Use get() to read a string that contains whitespace. 

    cout << str << "\n";

    
    return 0; 
}