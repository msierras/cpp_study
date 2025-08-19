// Use a static instance variable.

#include <iostream>


class ShareVar{
    private:
        static int num; // Declare a static data member. It will be shared by all instances of ShareVar.
    
    public:
        /* Member Function(s) */
        void setnum(int i) { num = i ;}
        void shownum() { std::cout << num << " "; }

};

int ShareVar::num;  // define num


int main(){
    ShareVar a, b;

    a.shownum();    // prints 0 since all static data members are initialized as 0 if no other initialization is specified 
    b.shownum();    // prints 0

    a.setnum(10);   // set static num to 10

    // both objects a and b will have num equal to 10 since they share the same static member variable!
    a.shownum();
    b.shownum();


    return 0;
}
