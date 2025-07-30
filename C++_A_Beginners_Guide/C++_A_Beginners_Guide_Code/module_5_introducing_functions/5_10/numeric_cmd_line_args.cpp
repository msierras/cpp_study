#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

    double a, b;

    if(argc !=3) {  // dont forget that argc is already 1 by default, so the addition of our two num args make argc to 3 instead of 2.
        cout << "Usage: add num num\n";
        return 1;        
    }

    a = atof(argv[1]);  // convert first command-line arg
    b = atof(argv[2]);  // convert second command-line arg

    cout << a + b;

    return 0;
}


// To add two numbers, use this type of command line (assuming the program is called add):
// C> add 100.2 231