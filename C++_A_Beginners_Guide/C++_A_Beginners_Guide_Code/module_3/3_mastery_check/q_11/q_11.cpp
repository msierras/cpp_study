/*
    The ASCII lowercase letters are separated from the uppercase letters by 32. Thus, to convert a lowercase letter to
    uppercase, subtract 32 from it. Use this information to write a program that reads characters from the keyboard. Have 
    it convert all lowercase letters to uppercase, and all uppercase letters to lowercase, displaying the result. Make 
    no changes to any other character. Have the program stop when the user enters a period. At the end, have the program 
    display the number of case changes that have taken place.
*/

#include <iostream>
using namespace std;

int main(){

    char user_input;
    int num_switches; 


    do{
        cout << "Enter an upper case or lower case character (enter . to exit): ";
        cin >> user_input; 

        // if user inputs an upper case char 
        if(user_input >= 65 && user_input <= 90){
            cout << "Upper case " << "[" << user_input << "]";
            user_input += 32;
            cout << " is turned to a lower case " << "[" << user_input << "]" << "\n";
            num_switches++;  
        }
        // if user inputs a lower case char
        else if(user_input >= 97 && user_input <= 122){
            cout << "Lower case " << "[" << user_input << "]";
            user_input -= 32;
            cout << " is turned to an upper case " << "[" << user_input << "]" << "\n";
            num_switches++;  
        }
        else if(user_input != 46){
            cout << user_input << " is not an upper case or lower case character! \n";
        }
    }while(user_input != '.');

    cout << "Number of case changes: " << num_switches; 


    return 0; 
}