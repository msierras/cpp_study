// capture_this.cpp
// example for "C++17 In Detail"
// by Bartlomiej Filipek
// 2019

#include <iostream>
#include <string>

struct Test  {
    // Case 1: Capture `this` (the pointer to the current object)
    void foo() {
        std::cout << "before: " << m_str  << '\n';

        // Lambda captures the pointer `this` -> modifies the original object's members
        auto addWordLambda = [this]()  { 
            m_str += "World";   // modifies the *actual* object's m_str
        };

        addWordLambda ();   // call lambda
        std::cout << "after: " << m_str  << '\n'; // "Hello World"
    }
    
    // Case 2: Starting C++17 we can capture `*this` (a copy of the current object)
    void fooCopy() {
        std::cout << "before: " << m_str  << '\n';

        // Lambda captures a COPY of the entire object (`*this`)
        auto addWordLambda = [*this]() mutable { 
            m_str += "World";   // modifies the COPY's m_str
        };

        addWordLambda();   // modifies only the copy
        std::cout << "after: " << m_str  << '\n'; // still just "Hello "
    }
    
    std::string m_str {"Hello "};
};

int main() {
    Test test;
    test.foo();       // modifies the original object -> prints "Hello World"

    Test copyTest;
    copyTest.fooCopy(); // works on a copy -> prints "Hello " (unchanged)

    return 0;
}

/*
==================== SUMMARY ====================
[this]   → captures the pointer to the current object.
           The lambda works on the ORIGINAL object and
           modifies its members.

[*this]  → captures a COPY of the current object.
           The lambda works on the COPY, so the original
           object remains unchanged unless you return/use
           the modified copy.
=================================================
*/
