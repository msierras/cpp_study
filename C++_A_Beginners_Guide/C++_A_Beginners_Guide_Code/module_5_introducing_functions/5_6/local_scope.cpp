#include <iostream>
using namespace std;

// function prototype(s)

void f1();

int main(){

    int val = 10;   // this val is local to main()
    
    cout << "val in main(): " << val << "\n";

    f1();
    cout << "vail in main(): " << val << '\n';

    return 0;
}


void f1(){
    int val = 88;

    cout << "val in f1(): " << val << "\n";
}