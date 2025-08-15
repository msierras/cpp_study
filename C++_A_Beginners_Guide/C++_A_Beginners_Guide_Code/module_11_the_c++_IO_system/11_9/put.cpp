// Use put() to write a file.

#include <iostream>
#include <fstream>
using namespace std;


int main(){
    // message we want to write
    char *p = "hello there\n";

    ofstream out("test", ios::out | ios::binary);
    if(!out){
        cout << "Cannot open file.\n";
        return 1;
    }

    // Write characters until the null-terminator is reached.
    while(*p){
        out.put(*p++);  // Write a string to a file using put(). No character translation will occur.
    }

    out.close();


    return 0; 
}