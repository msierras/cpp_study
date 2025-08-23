// Part I/demo_print.cpp
// Example for "C++17 In Detail"
// by Bartlomiej Filipek
// 2018/2019

#include <iostream>  // Include standard I/O library

// Function template that prints information about a single value.
// constexpr ensures that the expression can be evaluated at compile time if possible.
// Here, it allows the compiler to check the type of T at compile time and choose the correct branch.
template<typename T> void linePrinter(const T& x)  {
    // Check at compile-time if T is an integral type (int, long, etc.)
    if constexpr (std::is_integral_v<T>)
        std::cout << "num: " << x << '\n';  // Print integral number

    // Check at compile-time if T is a floating-point type (float, double)
    else if constexpr (std::is_floating_point_v<T>) {
        // Compute the fractional part of the number
        // static_cast<long>(x) converts x to type long.
        // static_cast is used for explicit type conversions between compatible types, like numeric types or pointers 
        // within an inheritance hierarchy.
        // It is checked at compile time, unlike reinterpret_cast which is unsafe and works for unrelated types.
        // In this case, it allows us to subtract the integer part of x from x to get the fractional part.
        const auto frac = x - static_cast<long>(x);  
        std::cout << "flt: " << x << ", frac " << frac << '\n';
    }

    // Check at compile-time if T is a pointer type
    else if constexpr(std::is_pointer_v<T>) {
        std::cout << "ptr, ";          // Indicate that this is a pointer
        linePrinter(*x);                // Recursively print the value pointed to
    }

    // Fallback for any other types (e.g., std::string, char)
    else
        std::cout << x << '\n';  
}

// Variadic template function: can accept multiple arguments of any type
template<typename ... Args> void printWithInfo(Args ... args) {
    (linePrinter(args), ...); // Fold expression: calls linePrinter on each argument
}

int main () {
    int i = 10;       // Integer variable
    float f = 2.56f;  // Float variable

    // Call printWithInfo with multiple arguments:
    // &i -> pointer to int
    // &f -> pointer to float
    // 30 -> integer
    printWithInfo(&i, &f, 30);  

    return 0;
}
