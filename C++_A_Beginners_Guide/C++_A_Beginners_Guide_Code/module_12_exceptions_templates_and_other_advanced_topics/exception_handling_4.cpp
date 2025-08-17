// A try block can be localized to a function.

#include <iostream>
using namespace std;


// A try/catch is reset each time a function is entered.
void Xhandler(int test){
    try{
        if(test) throw test;
    }
    catch(int i){
        cout << "Caught One!    Ex. #: " << i << "\n";
    }
}

int main(){
    cout << "start\n";

    Xhandler(1);
    Xhandler(2);
    Xhandler(0);
    Xhandler(3);


    cout << "end";

    return 0; 
}