// copy_elision_non_moveable.cpp
// Example from "C++17 In Detail"
// by Bartlomiej Filipek
// 2018/2019

#include <array>

// This example demonstrates **copy elision** in C++17 with a type that is
// neither copyable nor movable. Thanks to mandatory copy elision (P0135R0),
// returning such objects from functions is possible without requiring copy/move
// constructors to exist.

// Define a struct that cannot be copied or moved
struct NonMoveable {
    /* Constructors */

    // Constructor that takes an int parameter
    // Initializes 'v' with the given value
    NonMoveable(int x) : v(x) { }

    // Copy constructor: explicitly deleted
    // Prevents constructing a new NonMoveable from an existing one (e.g., NonMoveable b = a;)
    NonMoveable(const NonMoveable&) = delete;

    // Move constructor: explicitly deleted
    // Prevents moving a temporary NonMoveable into another (e.g., NonMoveable b = make(10);)
    // '&&' indicates rvalue reference, which normally binds to temporaries.
    // In C++17, this being deleted does not matter when returning by value,
    // because copy elision is guaranteed.
    NonMoveable(NonMoveable&&) = delete;
  
    // A large array to emphasize that this object is "big"
    std::array<int, 1024> arr;
    
    // An integer value, initialized by the constructor
    int v;
};

// Factory function that creates and returns a NonMoveable
NonMoveable make(int val) {
    // If val is positive, construct and return NonMoveable with val
    if (val > 0)
        return NonMoveable(val);
  
    // Otherwise, construct and return NonMoveable with -val
    return NonMoveable(-val);

    // Note: Without C++17 guaranteed copy elision, this would not compile
    // because copy/move constructors are deleted. With C++17, the object
    // is created directly in the caller’s space (no copy or move needed).
}

int main() {
    // Create a NonMoveable object by calling make().
    // Even though the return type is "by value", copy elision makes it possible.
    auto largeNonMoveableObj = make(90);

    // Access and return the stored integer value
    return largeNonMoveableObj.v;
}
