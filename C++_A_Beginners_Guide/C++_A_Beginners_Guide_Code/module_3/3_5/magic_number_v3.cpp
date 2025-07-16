// Magic Number Program: 3rd improvement. 

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    int magic;  // magic number
    int guess;  // user's guess

    magic = rand(); // get a random number

    do{
        cout << "Enter your guess: ";
        cin >> guess;
        if(guess == magic){
            cout << "** Right ** ";
            cout << magic<< " is the magic number.\n";
        }
        else{
            cout << "...Sorry, you're wrong.";
            if(guess > magic){
                cout << " Your guess is too high.\n";
            }
            else{
                cout << " Your guess is too low.\n";
            }
        }
    } while(guess != magic);


    return 0; 
}