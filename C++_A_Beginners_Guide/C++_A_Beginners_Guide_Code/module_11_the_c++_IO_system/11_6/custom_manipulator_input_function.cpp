// Create an input manipulator.

#include <iostream>
#include <iomanip>
using namespace std;


istream &prompt(istream &stream){
    cin >> hex;
    cout << "Enter number using hex format:";
    return stream;
}


int main(){
    int i;

    cin >> prompt >> i;
    cout << i;


    return 0; 
};