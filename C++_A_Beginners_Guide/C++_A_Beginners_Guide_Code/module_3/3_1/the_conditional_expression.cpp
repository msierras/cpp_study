// Magic Number program. 

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    int magic;  // magic number
    int guess;  // user's guess

    magic = rand();  // gets a random number

    cout << "Enter your guess: ";
    cin >> guess;

    if(guess == magic){
        cout << "** Right **";
    }
    else{
        cout << "...Sorry, you're wrong.\n";
        if(guess < magic){
            cout << "Your guess is too high.\n";
        }
        else{
            cout << "Your guess is too low.\n";
        }
    }


    return 0; 
}