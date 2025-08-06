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

        // getter
        void setval(int i) { val = i; }
};

void display(MyClass &ob){  // ob is passed by reference rather than by value like shown in the previous example.
    cout << ob.getval() << "\n";
}

void change(MyClass &ob){
    ob.setval(100);
}


int main(){
    MyClass a(10);  // creation of object a using class MyClass

    cout << "Before calling display().\n";
    display(a); 
    cout << "After display() returns.\n";

    change(a);  // since change uses a reference to the argument object it will change the argument rather than making a copy
    cout << "After calling change().\n";
    display(a);

    return 0; 
}