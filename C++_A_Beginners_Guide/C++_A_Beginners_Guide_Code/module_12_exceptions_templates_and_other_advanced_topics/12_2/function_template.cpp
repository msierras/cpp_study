// Function template example.

#include <iostream>
using namespace std;

// This is a function template. Since we only have one generic type (class X), each parameter must be of the same type!
// i.e, we can only swap two ints, floats, doubles, etc, but we cant swap an int with a double and so on.
template <class X> void swapargs(X &a, X &b){
    X temp;
    temp = a;
    a = b;
    b = temp;
};


int main(){
    int i=10, j=20;
    float x=10.1, y=23.3;
    char a='x', b='z';

    cout << "Original i, j: " << i << " " << j << "\n";
    cout << "Original x, y: " << x << " " << y << "\n";
    cout << "Original a, b: " << a << " " << b << "\n";

    swapargs(i, j);
    swapargs(x, y);
    swapargs(a, b);

    cout << "Swapped i, j: " << i << " " << j << "\n";
    cout << "Swapped x, y: " << x << " " << y << "\n";
    cout << "Swapped a, b: " << a << " " << b << "\n";


    return 0; 
}