#include <iostream>
using namespace std;


class MyClass{
    private:
    int val;
    
    public: 
    // constructor
    MyClass(int i){
        val = i;
    }

    // accessor/getter 
    int getval() { return val; }
    // setter
    void setval(int i) { val = i; }
};

// display() is taking a call-by-value parameter of an existing MyClass object
void display(MyClass ob){
    cout << ob.getval() << "\n";
}

/*  
    The setval() in this function does not affect the ob argument since this function is using
     the call-by-value parameter-passing-convention rather than the call-by-reference parameter-passing-convention

*/ 
void change(MyClass ob){
    ob.setval(100); // no effect on argument

    cout << "Value of ob inside change(): ";
    display(ob);
}


int main(){
    MyClass a(10);

    cout << "Value of 'a' before calling change(): ";
    display(a); // passing a MyClass object to display()

    change(a);  // passing a MyClass object to change()
    cout << "Value of 'a' after calling change(): ";
    display(a); // passing a MyClass object to change(). The MyClass a in main() does not change since we're only passing a copy of a to change() and display().

    return 0;
}