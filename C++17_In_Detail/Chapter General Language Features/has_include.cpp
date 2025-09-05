// has_include.cpp
// example for "C++17 In Detail"
// by Bartlomiej Filipek
// 2019

#include <iostream>
#include <optional> // for std::optional (a wrapper for a value that may or may not exist)
#include <string>

/*  
    Note below that we cannot write: #if defined __has_include && _has_include(<charconv>) as in older compilers - that don't support
    __has_include we'd get a compile error. The compiler will complain that since __has_include is not defined and the whole
    expression is wrong.
*/ 
#ifdef __has_include 
#  if __has_include(<charconv>) // if available, has_charconv is defined as  1
#    define has_charconv 1
#    include <charconv>
#  endif
#endif


/*
    The function ConvertToInt will try to convert a string to an int. 
    It returns std::optional which will be either an integer value, or empty (std::nullopt) if conversion fails. 
*/
std::optional<int> ConvertToInt(const std::string& str) {   
    int value { };  // initializes value to 0. 
    #ifdef has_charconv
    const auto last = str.data() + str.size();  // pointer to end of the string 
    const auto res = std::from_chars(str.data(), last, value);  // tries to parse the string into value 
    if (res.ec == std::errc{} && res.ptr == last)   // checks if no error occurred 
        return value;   // if successful return value wrapped in std::optional 
    #else  
    // fallback path (if <charconv> is not available) 
    try {  
        size_t read = 0;
        value = std::stoi(str, &read);  // stoi is string to integer conversion. Read tells how many characters were consumed        
        if (str.size() == read) // if entire string was parsed then retun value
            return value;
    }
    catch (...) { } // if parsing failed (exception throw) then we catch and ignore, reutnr std::nullopt
    #endif
    
    return std::nullopt;    // if neither method succeeded, return an empty optional (std::optional)
}

int main() {
    // print "has_charconv" only if <charconv> is available 
    #ifdef has_charconv 
    std::cout << "has_charconv\n";
    #endif

    // Try to convert "Hello" to an integer. If it fails then oint.has_value() prints 0 
    auto oint = ConvertToInt("Hello");
    std::cout << oint.has_value() << '\n';
    
    // Try to convert "Hello" to an integer. This succeeds and then oint.has_value() prints 1 
    oint = ConvertToInt("10");
    std::cout << oint.has_value() << '\n';
}

/* 
    If you code has to work under two different compilers, then you might experience two different sets fo available features
    and platform-specific changes.

    In C++17 you can use __has_include preprocessor constant expression to check if a given header exists, e.g.:
        #if __has_include(<header_name>)
        #if __has_include("header_name")


    NOTE: Another important thing to remember is that sometimes a compiler might provide a header stub (a minimal, placeholder 
    header file that contains only the necessary declarations such as class definitions, function prototypes, and variable 
    declarations for a module or component, without providing the full implementation details). For example, in C++14 the 
    <execution> header might be present (it defiens C++17 parallel algorithm execution modes), but the whole file will be 
    empty (due ot ifdefs). If you check for that file with __has_include and use C++ 14, the you'll get a wrong result!!!!!
*/