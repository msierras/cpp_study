// copy_elision.cpp
// example for "C++17 In Detail"
// by Bartlomiej Filipek
// 2018/2019

// compile with -fno-elide-constructors on gcc to avoid elision in C++14
// g++ CopyElision.cpp -std=c++14 -fno-elide-constructors

#include <iostream>

struct Test {
    /* Constructor(s) */
    
    // Default constructor 
    Test() { std::cout << "Test::Test\n"; }
    
    // Copy constructor: runs when copying an existing Test (e.g. Test b = a;)
    Test(const Test&) { std::cout << "Test(const Test&)\n"; }

    // Move construcotr: runs when taking ownership from a temporary Test (e.g Test b = Test();)
    // '&&' means this constructor takes an rvalue reference.
    // An rvalue is a temporary object or a value that doesn’t have a persistent memory address, e.g., a literal or 
    // a returned temporary.
    Test(Test&&) { std::cout << "Test(Test&&)\n"; }

    
    // Destructor 
    ~Test() { std::cout << "~Test\n"; }
};

// Creating a Test object with the default Test constructor and returning it. 
Test Create() {
    return Test();
}

int main() {
    auto n = Create();
}

/*
    In the above call, you might assume a temporary copy is used - to store the return value of Create. 
    In C++14, most compilers can see that the temporary object can be easily optimised and they can 
    create n “directly” from the call of Create(). So you’ll probably see the following output:

    Test::Test // create n
    ~Test // destroy n when main finishes
*/


