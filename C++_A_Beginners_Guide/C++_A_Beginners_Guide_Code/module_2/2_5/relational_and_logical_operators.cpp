// Demonstrate the relational and logical operators.

#include <iostream>
using namespace std;

int main(){
    int i, j;
    bool b1, b2;

    i = 10;
    j = 11;
    if(i < j){
        cout << "i < j\n";
    }
    if(i <= j){
        cout << "i <= j\n";
    }
    if(i != j){
       cout << "i != j\n"; 
    }
    if(i == j){
       cout << "i == j\n"; 
    }
    if(i >= j){
       cout << "i >= j\n"; 
    }
    if(i > j){
       cout << "i > j\n"; 
    }

    b1 = true;
    b2 = false;
    if(b1 && b2){
        cout << "this won't execute!";
    }
    if(!(b1 && b2)){
        cout << "!(b1 && b2) is true\n";
    }
    if(b1 || b2){
        cout << "b1 || b2 is true\n";
    }

    return 0; 
}
