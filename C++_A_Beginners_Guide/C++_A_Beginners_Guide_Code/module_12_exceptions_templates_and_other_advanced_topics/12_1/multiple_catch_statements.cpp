// Use multiple catch statements.

#include <iostream>
using namespace std;


//Different types of exceptions can be taught.
void Xhandler(int test){
    try{
        if(test) throw test;    // throw int if int is anything besides 0 
        else throw "Value is zero"; // throw char *
    }
    catch(int i){
        cout << "Caught One! Ex. #:  " << i << "\n";
    }
    catch(const char *str){
        // We must use "const char*" instead of "char*" here because the type being thrown is "const char*".
        // In older C++ standards (C++98/03), string literals were of type "char[N]"
        // and decayed to "char*", so "catch(char*)" used to work.
        // Now (C++ 11 and later), "catch(char*)" does not match "const char*", so the compiler rejects it.
        cout << "Caught a string: ";
        cout << str << "\n";
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