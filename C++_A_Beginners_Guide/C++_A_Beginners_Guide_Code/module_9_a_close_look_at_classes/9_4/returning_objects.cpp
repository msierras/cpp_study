// Returning objects

#include <iostream>
using namespace std;


class MyClass{
    private:
        int val;

    public: 
        // Normal constructor
        MyClass(int i) { 
            val = i; 
            cout <<"Inside constructor\n";
        }

        // Destructor
        ~MyClass(){
            cout << "Destructing\n";
        }

        int getval() { return val; }

        // Return an object
        MyClass mkBigger(){
            MyClass o(val * 2);

            return o;
        }

};

void display(MyClass ob){
    cout << ob.getval() << "\n";
}


int main(){
    cout << "Before constructing a.\n";
    MyClass a(10);
    cout << "After constructing a.\n\n";

    cout << "Before call to display().\n";
    display(a);
    cout << "After display() returns.\n\n";

    cout << "Before call to mkBigger().\n";
    a = a.mkBigger();
    cout << "After mkBigger() returns.\n\n";

    cout << "Before second call to display().\n";
    display(a);
    cout << "After display() returns.\n\n";


    return 0;
}