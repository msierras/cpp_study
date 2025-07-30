// Display command-line arguments.

#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

    for(int i=0; i < argc; i++){
        cout << argv[i] << "\n";
    }


    return 0;
}

/* For example, if the program is called ComLine, then executing it like this:
    C>ComLine one two three

    causes the following output:
    ComLine
    one
    two
    three
*/