#include <iostream>
using namespace std;


int main(){
    int i, j;

    j = 10;

    i = (j++, j+100, 999+j);    // The comma means "do this and this and this."

    cout << i;


    return 0;
}