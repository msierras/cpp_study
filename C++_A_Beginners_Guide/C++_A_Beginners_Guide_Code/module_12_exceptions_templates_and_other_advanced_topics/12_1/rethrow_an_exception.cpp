// Example of "rethrowing" an exception 

#include <iostream>
using namespace std; 


void Xhandler(){
    try{
        throw "hello";  // throw a const char *
    }
    catch(const char *){    // catch a const char *
        cout << "Caught const char * inside Xhandler\n";
        throw;  // rethrow const char * out of function
    }
}


int main(){
    cout << "start\n";

    try{
        Xhandler();
    }
    catch(const char *){
        cout << "Caught const char * inside main\n";
    }

    cout << "end";

    
    return 0; 
}