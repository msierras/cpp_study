/* Copy constructor invoke when passing an object to a function. */

#include <iostream>
using namespace std;


class MyClass{
    private:
        int val, copynumber;
    public:
        // Normal constructor
        MyClass(int i){
            val = i;
            copynumber = 0;
            cout << "Inside normal constructor\n";
        }

        /* 
            Copy constructor form: 
            classname(const classname &on) { body of constructor}
        */
        MyClass(const MyClass &o){
            val = o.val;    // val for new "copy" is set to val of referenced object argument 
            copynumber = o.copynumber + 1;  // copynumber for new "copy" is set to copynumbero of referenced object argument + 1
            cout << "Inside copy constructor.\n";
        }

        // Destructor
        ~MyClass(){
            if(copynumber == 0) cout << "Destructing original.\n";
            else cout << "Destructing copy " << copynumber << "\n";
        }

        // accessor/getter
        int getval() { return val; }
};

void display(MyClass ob){
    cout << ob.getval() << "\n";
}


int main(){
    MyClass a(10);
    display(a);


    return 0;
}