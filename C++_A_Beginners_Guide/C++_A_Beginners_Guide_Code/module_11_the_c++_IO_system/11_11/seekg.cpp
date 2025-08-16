// Display a file from a given starting point

#include <iostream>
#include <fstream>   // for file input operations
#include <cstdlib>   // for atoi() function
using namespace std;

int main(int argc, char *argv[]){
    char ch; // variable to hold each character read from the file

    // Check if the user provided the correct number of arguments
    // argc should be 3: 
    //   argv[0] = program name
    //   argv[1] = filename
    //   argv[2] = starting location in the file (as a number)
    if(argc != 3){
        cout << "Usage: seekg <filename> <starting location>\n";
        return 1;  // exit program with error code
    }

    // Open the file in binary mode for input
    // ios::in   → open for reading
    // ios::binary → treat the file as binary (no translation of newline characters)
    ifstream in(argv[1], ios::in | ios::binary);
    if(!in){ // check if the file failed to open
        cout << "Cannot open file.\n";
        return 1;  // exit program with error code
    }

    // Move the "get" pointer (the input file pointer) to the starting location
    // atoi(argv[2]) converts the starting position from string to int
    // ios::beg specifies the offset is from the beginning of the file
    in.seekg(atoi(argv[2]), ios::beg);

    // Read one character at a time starting from that position
    // .get(ch) extracts the next character from the file into 'ch'
    while(in.get(ch)){
        cout << ch; // display the character to the console
    }

    // File stream automatically closes when 'in' goes out of scope
    return 0; // successful completion
}
