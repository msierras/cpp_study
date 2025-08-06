// Constructors, destructors, and passing objects.

#include <iostream>
using namespace std;

class MyClass{
    private:
        int val;

    public: 
        // constructor
        MyClass(int i){
            val = i;
            cout << "Inside constructor\n";
        }

        // destructor
        ~MyClass() { cout << "Destructing\n"; }
        
        // accessor/getter
        int getval() { return val; }
};

void display(MyClass ob){
    cout << ob.getval() << "\n";
}


int main(){
    MyClass a(10);

    cout << "Before calling display().\n";
    display(a);
    cout << "After display() returns.\n";


    return 0; 
}