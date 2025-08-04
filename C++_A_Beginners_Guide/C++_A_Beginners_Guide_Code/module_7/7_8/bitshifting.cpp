#include <iostream>
using namespace std;


/* Function prototype(s) */
void show_binary(unsigned int u);


int main(){
    int i=1, t;

    // shift left
    cout << "Left shifting:\n";
    for(t=0; t<8; t++){
        show_binary(i);
        i = i << 1; // Left shift i one position.
    }

    cout << "\n";

    cout << "Right shifting:\n";
    // shift right
    for(t=0; t<8; t++){
        i = i >> 1; // Right shift i one position.
        show_binary(i);
    }


    return 0; 
}


// Display the bits within a byte.
void show_binary(unsigned int u){
    int t;
    for(t=128; t>0; t /= 2){
        if(u & t) cout << "1 ";
        else cout << "0 ";
    }
    cout << "\n";
}