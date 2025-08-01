// A customize version of strcat().

#include <iostream>
#include <cstring>
using namespace std;


/* Function prototype(s)*/
void mystrcat(char *s1, char*s2, int len=0);


int main(){

    char str1[80] = "This is a test";
    char str2[80] = "0123456789";

    mystrcat(str1, str2, 5);    // concatenate 5 chars
    cout << str1 << "\n";

    strcpy(str1, "this is a test"); // reset str1

    mystrcat(str1, str2);   // concatenate entire str2 string to str1 string
    cout << str1 << "\n";

    return 0;
}


// A custom version of strcat().
void mystrcat(char *s1, char *s2, int len){
    //find end of s1
    while(*s1) s1++;    // while the current char is not null, move the s1 pointer ahead by one

    if(len == 0) len = strlen(s2);  // if len is not specified then cocatenate the entirety of s2 to s1.

    while(*s2 && len){  // if string s2's current char is not null and len was specified 
        *s1 = *s2;  // on first loop the null char of s1 will point to the first char of s2 
        s1++;
        s2++;
        len--;
    }

    *s1 = '\0'; // null terminate s1. We do this since a string must always end with a null!

}