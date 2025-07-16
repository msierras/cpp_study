// This program displays the alphabet using char letter.

#include <iostream>
using namespace std;

int main() {

    char letter;

    for(letter = 'A'; letter <= 'Z'; letter++){  // initializing at A, if letter less than or equal to Z we increment letter to next letter then print letter. 
        cout << letter << " " ;
    }


    return 0; 
}