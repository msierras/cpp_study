/*
    Project 11-1
    
    Create a file comparison utility.
*/

#include <iostream>
#include <fstream>
using namespace std;


int main(int argc, char *argv[]){
    register int i;

    unsigned char buf1[1024], buf2[1024];

    /* Code needed to create the CLI command */
    if(argc != 3){
        cout << "Usage: compfiles <file1> <file2>\n";
        return 1;
    }

    // Opening the files for binary input operations 
    ifstream f1(argv[1], ios::in | ios::binary);
    if(!f1){
        cout << "Cannot open first file.\n";
        return 1;
    }

    ifstream f2(argv[2], ios::in | ios:: binary);
    if(!f2){
        cout << "Cannot open second file.\n";
    }

    cout << "Comparing files...\n";

    do{
        f1.read( (char *) buf1, sizeof buf1);
        f2.read( (char *) buf2, sizeof buf2);

        if( f1.gcount() != f2.gcount() ){   /// if number of characters read differ 
            cout << "Files are of differing sizes.\n";
            f1.close();
            f2.close();
            return 0; 
        }

        // compare contents of buffers
        for(i = 0; i < f1.gcount(); i++){
            if( buf1[i] != buf2[i] ){
                cout << "Files differ.\n";
                f1.close();
                f2.close();
                return 0; 
            }
        }

    } while( !f1.eof() && !f2.eof() ); // while f1 and f2 are not at end of file

    cout << "Files are the same\n";

    f1.close();
    f2.close();


    return 0; 
}