// Pass a string to a function 

#include <iostream>
#include <cstring>
using namespace std;


/* Function prototype(s)*/
void strInvertCase(char *str);


int main(){

    char str[80];

    strcpy(str, "This Is A Test");

    strInvertCase(str);

    cout << str;    // display modified string


    return 0; 
}


// Inver the case of the letters within a string.
void strInvertCase(char *str){
    while(*str){

        // invert case
        if(isupper(*str)) *str = tolower(*str);
        else if (islower(*str)) *str = toupper(*str);

        str++;  // move on to the next char
    }
}


void count(long int *ptr);