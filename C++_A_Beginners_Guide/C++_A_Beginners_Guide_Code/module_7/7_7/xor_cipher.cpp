// Use XOR to encode and decode a message;

#include <iostream>
#include <cstring>
using namespace std;


int main(){
    char msg[] = "This is a test";
    char key = 88;

    cout << "Original message: " << msg << "\n";

    for(int i=0; i < strlen(msg); i++){
        msg[i] = msg[i] ^ key;
    }

    cout << "Encoded message: " << msg << "\n";

    for(int i=0; i < strlen(msg); i++){
        msg[i] = msg[i] ^ key;
    }

    cout << "Decoded message: " << msg << "\n";


    return 0; 
}