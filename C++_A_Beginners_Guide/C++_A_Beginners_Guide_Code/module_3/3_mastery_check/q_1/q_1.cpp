/*
    Write a program that reads characters from the keyboard until a $ is typed.
    Have the program count the number of periods. Report the total at the end of the program.
*/

#include <iostream>
using namespace std;

int main(){

    char user_input; 
    int period_count = 0;

    do{
        cout << "Enter a single character ($ to quit): ";
        cin >> user_input;
        
        if (user_input == '.')
        {
            period_count++;
        }
        
    }while(user_input != '$');

    cout << "The number of periods entered were " << period_count << ".";


    return 0; 
}