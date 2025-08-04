#include <iostream>
using namespace std;


/* Function prototype(s) */
void counter();


int main(){

    counter();
    counter();
    counter(); 


    return 0;
}


void counter(){
    static int count = 0;
    count++;
    cout << "Counter() has been called " << count << " time(s)!\n";
}