// Convert a string to uppercase. 

#include <iostream>
#include <cstring>
#include <cctype> 

using namespace std;

int main(){

    char str[80];   // initialization of char array that has space for 79 chars
    int i;

    strcpy(str, "this is a test");  // copying "this is a test" to str

    // the condition str[i] is basically saying "as long as value is not null"
    for(i=0; str[i]; i++) str[i] = toupper(str[i]); //  toupper makes the char upper case

    cout << str; 

    return 0;
}