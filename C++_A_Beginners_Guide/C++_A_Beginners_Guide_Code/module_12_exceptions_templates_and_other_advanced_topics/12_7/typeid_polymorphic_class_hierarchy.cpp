// An example that uses typeid on a polymorphic class hierarchy.

#include <iostream>
#include <typeinfo>


class Base{
    virtual void f() {};    // make Base polymorphic
    // ...
};

class Derived1: public Base{
    // ...
};

class Derived2: public Base{
    // ...
};


int main(){
    Base *p, baseob;
    Derived1 ob1;
    Derived2 ob2;

    p = &baseob;
    std::cout << "p is pointing to an object of type " << typeid(*p).name() << std::endl;

    p = &ob1;
    std::cout << "p is pointing to an object of type " << typeid(*p).name() << std::endl;

    p = &ob2;
    std::cout << "p is pointing to an object of type " << typeid(*p).name() << std::endl;


    return 0; 
}


/*
    Our output is the following:

    p is pointing to an object of type 4Base    // here, the 4 means the identifier length (Base is 4 characters), followed by the name Base.
    p is pointing to an object of type 8Derived1 // here, the 8 means the identifier length (Derived1 is 4 characters), followed by the name Derived1.
    p is pointing to an object of type 8Derived2 // here, the 8 means the identifier length (Derived2 is 4 characters), followed by the name Derived2.

    NOTE: The output is dependent on your compiler!
*/



