// This example catches all exceptions.

#include <iostream>
using namespace std;


void Xhandler(int test){
    try{
        if(test == 0 ) throw test;  // throw int
        if(test == 1) throw 'a';    // throw char
        if(test == 2) throw 123.23; // throw double
    }
    catch(...){
        cout << "Caught one!\n";
    }
};



int main(){
    cout << "start\n";

    Xhandler(0);
    Xhandler(1);
    Xhandler(2);

    cout << "end";


    return 0;
}