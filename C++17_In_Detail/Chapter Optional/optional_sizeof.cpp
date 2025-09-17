// optional_sizeof.cpp
// example for "C++17 In Detail"
// by Bartlomiej Filipek
// 2018/2019

#include <optional>   // for std::optional
#include <iostream>   // for std::cout



// A struct using std::optional to represent "maybe" values
struct RangeOpt {
    // Each optional<double> wraps a double + a bool flag
    // sizeof(double) = 8, but optional adds a flag and alignment padding.
    // Typically sizeof(std::optional<double>) = 16 bytes.
    std::optional<double> mMin;
    std::optional<double> mMax;
};

// A manual struct doing the same thing, but with explicit bool flags
struct Range {
    bool mMinAvailable;   // true if mMin is valid
    bool mMaxAvailable;   // true if mMax is valid
    // !!! In C++ a bool is typically 1 byte.
    // We *could* make it 8 bytes, but that would waste memory:
    // - The only info a bool needs is true/false (1 bit).
    // - Using 8 bytes means wasting 63 bits for no reason.
    // - On modern CPUs, reading/writing 1 byte is already efficient,
    //   and alignment rules automatically add padding where needed.
    // So bool is kept as 1 byte, and the compiler aligns the struct as needed.
    
    double mMin;          // value if available
    double mMax;          // value if available
    // Due to alignment: doubles need 8-byte boundaries.
    // After the two bools, the compiler inserts 6 padding bytes,
    // so the total size becomes 24 bytes.
};



int main() {
    // Print the size of the struct with std::optional members
    std::cout << sizeof(RangeOpt) << "\n";
    
    // Print the size of the struct with manual bools + doubles
    std::cout << sizeof(Range);

    return 0;
}
