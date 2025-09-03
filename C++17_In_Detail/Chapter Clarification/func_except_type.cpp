// func_except_type.cpp
// example for "C++17 In Detail"
// by Bartlomiej Filipek
// 2018/2019

// Define an alias for a function pointer type:
//   - void (*)() means "pointer to a function that returns void and takes no parameters"
//   - noexcept means the function is guaranteed not to throw exceptions
using TNoexceptVoidFunc = void (*)() noexcept;

// This function accepts ONLY function pointers to functions declared noexcept
void SimpleNoexceptCall(TNoexceptVoidFunc f) {
    f(); // safe call: the compiler knows f cannot throw
}

// Define a regular function pointer type (can point to any void() function)
using TVoidFunc = void (*)();

// This function accepts any void() function pointer (regular or noexcept)
void SimpleCall(TVoidFunc f) {
    f(); // might throw, compiler doesn’t assume noexcept
}

// Function that is explicitly declared noexcept
void fNoexcept() noexcept { }

// Function with no exception specification (can potentially throw)
void fRegular() { }

int main() {
    // Works: fNoexcept has the right type (void() noexcept)
    SimpleNoexceptCall(fNoexcept);

    // Error: cannot convert fRegular (void()) to void() noexcept
    // In C++17, noexcept is part of the function type, so types are incompatible
    // SimpleNoexceptCall(fRegular);

    // Works: fNoexcept (void() noexcept) can be converted to void()
    // because calling a noexcept function in a context that accepts a potentially throwing one is safe
    SimpleCall(fNoexcept);

    // Works: fRegular matches void()
    SimpleCall(fRegular);
}

/*
    This example demonstrates that in C++17, exception specifications like noexcept are now part of the type system, 
    enforcing safer conversions.
*/