// The body of a for loop can be empty.

#include <iostream>
using namespace std;

int main(){

    int i;
    int sum = 0;

    // sum the numbers from 1 through 10
    for(i=1; i<=10; sum += i++);

    cout << "Sum is " << sum;


    return 0;
}