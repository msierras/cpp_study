#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main(){

    char choice[3]; 

    cout << "Choose how to run the reverse case program by typing 0 or 1:\n0)Array Indexing\n1)Pointers\nChoice: ";
    cin >> choice;
    cout << "\n";


    if(!strcmp(choice, "0")){
        cout << "This is reverse case with array indexing!\n";
        int i; 
        char str[80] = "This Is A Test";

        cout << "Original string: " << str << "\n";

        for(i = 0; str[i]; i++){
            if(isupper(str[i])){
                str[i] = tolower(str[i]);
            }
            else if(islower(str[i])){
                str[i] = toupper(str[i]);
            }
        }

        cout << "Inverted-case string: " << str;


    }
    else if(!strcmp(choice, "1")){
        cout << "This is reverse case with pointers!\n";

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

    }

    return 0;
}