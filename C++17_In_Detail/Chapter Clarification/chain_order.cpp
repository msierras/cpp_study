// chain_order.cpp
// example for "C++17 In Detail"
// by Bartlomiej Filipek
// 2018/2019

#include <iostream> 

class Query {      
public:
    // The '&' here means this function returns a reference to the object itself
    // This allows method chaining, i.e., calling multiple functions on the same object in a single statement.
    Query& addInt(int i) {
        std::cout << "addInt: " << i << '\n';

        // '*this' is the object itself
        // returning '*this' by reference allows the next chained call to operate on the same object
        return *this;
    }
    
    Query& addFloat(float f) {
        std::cout << "addFloat: " << f << '\n';

        // Same as above: returning a reference to the current object
        return *this;
    }
};

// Functions that simulate computation and return values
float computeFloat() { 
    std::cout << "computing float... \n";
    return 10.1f; 
}

float computeInt() { 
    std::cout << "computing int... \n";
    return 8; 
}

int main() {
    Query q;

    // Method chaining example:
    // In C++14, the arguments of chained calls can be evaluated in any order (not strictly left to right)
    // Here, computeFloat() and computeInt() may be called in any order before addFloat/addInt are executed!
    q.addFloat(computeFloat()).addInt(computeInt());    
    // Starting C++17 and beyond function chaining will work as expected when they contain inner expressions, i.e.,
    // they are evaluated from left to right. 

    
    // added to more clearly show where the program ends
    return 0;
}
