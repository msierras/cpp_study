// Use a 2-D array of pointers to create a dictionary. 

#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char *dictionary[][2] = {   // initialization of an array of char pointers 
        "pencil", "A writing instrument.",
        "keyboard", "An input device.",
        "rifle", "A shoulder-fired firearm.",
        "airplane", "A fixed-wing aircraft.",
        "network", "An interconnected group of computers."
    };

    char word[80];
    int i;

    cout << "Enter word: "; 
    cin >> word;

    for(i=0; *dictionary[i][0]; i++){   // *dictionary[i][0] refers to the first char of the key, i.e., 'p', 'k', 'r'. We do this to check for existance of the key value.  
        if(!strcmp(dictionary[i][0], word)){    // here, dictionary[i][0] refers to the entire string at row i column 0. 
            cout << dictionary[i][1] << "\n";
            break;
        }
    }

    if(!*dictionary[i][0]) cout << word << " not found.\n";

    return 0; 
}