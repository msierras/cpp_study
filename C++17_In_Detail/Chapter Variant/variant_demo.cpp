// variant_demo.cpp
// Example for "C++17 In Detail"
// by Bartlomiej Filipek
// 2018/2019

/*
==================== std::variant & std::visit Overview ====================

1. General format of std::variant:
   - A type-safe union that can hold *exactly one* value from a fixed set of types.
   - Syntax:
       std::variant<T1, T2, ..., Tn> v;
   - Example:
       std::variant<int, float, std::string> v;
       v = 42;            // holds an int
       v = 3.14f;         // now holds a float
       v = "hello";       // now holds a string

2. Accessing the stored value:
   - You cannot use direct member access like `v.i` (like in a union).
   - Instead, you must use:
       a) std::get<T>(v)          → returns the stored value if it matches type T.
       b) std::get_if<T>(&v)      → returns pointer to T if variant holds T, else nullptr.
       c) std::holds_alternative<T>(v) → returns true if variant holds T.
   - Example:
       v = 43;
       std::cout << std::get<int>(v);        // prints 43
       // std::get<float>(v); would throw std::bad_variant_access.

   Key difference from `union`: in `union`, you could do `v.i` directly 
      (unsafe, relies on type punning). With `variant`, you must use `std::get`
      to ensure type safety.

3. Visiting a variant:
   - The canonical way to handle the currently stored type.
   - Syntax:
       std::visit(Visitor{}, v);
   - A "Visitor" is an object with overloaded `operator()` for each possible type.
   - Example:
       struct Visitor {
           void operator()(int i) const { std::cout << "int: " << i << '\n'; }
           void operator()(float f) const { std::cout << "float: " << f << '\n'; }
           void operator()(const std::string& s) const { std::cout << "string: " << s << '\n'; }
       };
       std::variant<int, float, std::string> v = "hi";
       std::visit(Visitor{}, v); // prints: string: hi

===========================================================================
Summary:
- std::variant is a type-safe union introduced in C++17.
- Only one value is active at a time, but unlike union, it's safe and knows which one.
- Access with std::get / std::get_if / std::holds_alternative.
- Use std::visit with a Visitor struct or lambda to handle multiple types cleanly.
*/


#include <memory>
#include <iostream>
#include <malloc.h>
#include <variant>  // std::variant, std::visit, etc.
#include <cmath>



// Custom global new operator to track allocations.
// Every time new memory is allocated, we print how many bytes were requested.
void* operator new(std::size_t count) {
    std::cout << "allocating " << count << " bytes" << std::endl;
    return malloc(count);
}

// Visitor struct for std::visit.
// Each overload handles a different type that might be stored in the variant.
//
// NOTE: The overloaded operator() turns this struct into a "functor"
// (an object that can be called like a function). 
// std::visit requires a callable, so by overloading operator() 
// for each type, SampleVisitor can process all possible types
// inside the variant (int, float, std::string).
struct SampleVisitor {
    void operator()(int i) const { std::cout << "int: " << i << '\n'; }
    void operator()(float f) const { std::cout << "float: " << f << '\n'; }
    void operator()(const std::string& s) const { std::cout << "string: " << s << '\n'; }
};



int main() {
    // Declare a variant type that can hold either int, float, or std::string
    std::variant<int, float, std::string> intFloatString;

    // Verify at compile time that the variant can hold exactly 3 types
    static_assert(std::variant_size_v<decltype(intFloatString)> == 3);

    // By default, a variant initializes to its first alternative (int = 0)
    std::visit(SampleVisitor{}, intFloatString);

    // index() tells us which alternative is currently active:
    // 0 = int, 1 = float, 2 = string
    std::cout << "index = " << intFloatString.index() << std::endl;

    // Assign a float value -> variant now holds a float
    intFloatString = 100.0f;
    std::cout << "index = " << intFloatString.index() << std::endl;

    // Assign a string value -> variant now holds a string
    intFloatString = "hello super world";
    std::cout << "index = " << intFloatString.index() << std::endl;

    // Using std::get_if to safely retrieve the current value:
    // - Returns a pointer if the type matches
    // - Returns nullptr otherwise
    if (const auto intPtr (std::get_if<int>(&intFloatString)); intPtr) 
        std::cout << "int: " << *intPtr << '\n';
    else if (const auto floatPtr (std::get_if<float>(&intFloatString)); floatPtr) 
        std::cout << "float: " << *floatPtr << '\n';

    // std::holds_alternative<T>() is a quick way to check which type is stored
    if (std::holds_alternative<int>(intFloatString))
	    std::cout << "the variant holds an int!\n";
	else if (std::holds_alternative<float>(intFloatString))
	    std::cout << "the variant holds a float\n";
	else if (std::holds_alternative<std::string>(intFloatString))
	    std::cout << "the variant holds a string\n";  

    // Using std::get<T> will throw std::bad_variant_access if the type doesn't match.
    try {
        auto f = std::get<float>(intFloatString); 
        std::cout << "float! " << f << '\n';
    }
    catch (std::bad_variant_access&) {
        std::cout << "our variant doesn't hold float at this moment...\n";
    }

    // std::visit lets us apply the SampleVisitor to whichever type is currently stored
    std::visit(SampleVisitor{}, intFloatString); // currently a string
    intFloatString = 10;                         // now an int
    std::visit(SampleVisitor{}, intFloatString);
    intFloatString = 10.0f;                      // now a float
    std::visit(SampleVisitor{}, intFloatString);
}
