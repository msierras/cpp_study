#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){

    char s1[80] , s2[80];   // initialization of two arrays s1 and s2 with space allocated for 79 chars in both

    strcpy(s1, "C++"); // copying "C++" to string s1
    strcpy(s2, " is power programming.");    // copying " is power programming" to string s2

    cout << "lengths: " << strlen(s1);
    cout << ' ' << strlen(s2) << "\n";

    if(!strcmp(s1, s2)) cout << "The strings are equal\n";   // don't forget that 0 is returned is both are equal!
    else cout << "not equal\n";

    strcat(s1, s2); // appends s2 to the end of s1
    cout << s1 << "\n";

    strcpy(s2, s1); // copying content from s1 to s2 (content in s2 is replaced by contnet in s1)
    cout << s1 << " and " << s2 << "\n";

    if(!strcmp(s1, s2)) cout << "s1 and s2 are now the same.\n";


    return 0; 
}