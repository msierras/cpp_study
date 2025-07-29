#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;



int main(){


    char *p;
    char str[80] = "This is a Test";

    cout << "Original string: " << str << "\n";

    p = str;    // assigns p the address of the start of the array

    while(*p){
        if(isupper(*p)){
            *p = tolower(*p);
        }
        else if(islower(*p)){
            *p = toupper(*p);
        }
        p++;
    }

    cout << "Inverted-case string: " << str;

    return 0;

}
