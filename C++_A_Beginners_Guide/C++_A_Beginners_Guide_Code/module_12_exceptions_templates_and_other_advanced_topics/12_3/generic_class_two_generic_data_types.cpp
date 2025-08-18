/* This example uses two generic data types in a class definition. */

#include <iostream>
using namespace std;


template <class T1, class T2> class MyClass{
    private:
        T1 i;
        T2 j;

    public:
        MyClass(T1 a, T2 b) { i = a; j = b; }
        void show() { cout << i << " " << j << "\n"; }
};


int main(){
    MyClass<int, double> ob1(10, 0.23);
    MyClass<char, char *> ob2('X', "This is a test");

    ob1.show(); // show int, double
    ob2.show(); // show char, char * 


    return 0;
}