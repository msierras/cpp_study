// Display a file using get().

#include <iostream>
#include <fstream>
using namespace std;


int main(int argc, char *argv[]){
    char ch;

    /* 
        if argument count in CLI is not 2 then we're missing 1 argument! NOTE: remember that the first 
        argument is always the name of the program or its path  
    */
    if(argc != 2){  
        cout << "Usage: PR <filename>\n";
        
        return 1;
    }

    ifstream in(argv[1], ios::in | ios::binary);    // open the file for binary operations
    if(!in){
        cout << "Cannot open file.\n";
        return 1;
    }

    while(in){ // in will be false when end end of file is reached
        in.get(ch);
        if(in) cout << ch;
    }
 
    in.close();

    
    return 0; 
}