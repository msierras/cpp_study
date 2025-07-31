#include <iostream>
#include <cstring>
using namespace std;

int mystrlen(char *str);

int main(){

    char a_str[] = "How long is this string?";

    cout << a_str << "\n" << "mystrlen() says its " << mystrlen(a_str) << " characters long\n";

    cout << "The built in function strlen() says it's " << strlen(a_str) << " characters long.";

    return 0;
}


int mystrlen(char *str){
    
    // int variable count which keep track of the lenght of the string (how many characters are in the string)
    int count = 0;

    while(*str){
        count++;
        str++;
    }

    return count;
}