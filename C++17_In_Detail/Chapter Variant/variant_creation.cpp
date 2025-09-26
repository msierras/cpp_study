// variant_creation.cpp
// example for "C++17 In Detail"
// by Bartlomiej Filipek
// 2018/2019

#include <iostream>
#include <variant>
#include <cassert>
#include <vector>



int main() {
    
    // default initialization, by default, a variant object is initialized with the first type: (the first type has to has a default ctor(constructor) )
    std::variant<int, float> intFloat;
    std::cout << "Default variant initialization(the first type has to has a default ctor(constructor)):\n" 
              << intFloat.index() << ", value " << std::get<int>(intFloat) << "\n\n";
    


    // monostate for default initialization:  
    // NOTE: Only creating this local class for the example. In practice a class should not be made local since it limits
    //       reuseability. 
    class NotSimple {
        public:
            // NotSimple class constructor(s) 
            NotSimple(int, float) { }
    };

    /*
    ==================== std::monostate Overview ====================

    - std::monostate is a trivial, empty type introduced in C++17.
    - Purpose: act as a "safe dummy" first alternative in std::variant.
    - Why? Because std::variant must always hold *something* and defaults
    to its first type. If that type is not default-constructible, the
    variant cannot compile.

    Example:
        class NotSimple { NotSimple(int, float) { } }; // no default ctor

        std::variant<NotSimple, int> v; //  error!!!!
        std::variant<std::monostate, NotSimple, int> v; //  ok :)
        // v defaults to holding monostate (index 0).

    - Difference vs std::optional:
        * std::optional<T> = either T or "nothing".
        * std::variant<monostate, T> = either T or dummy monostate value.
        (monostate explicitly represents the "nothing" case).

    - Key points:
        * monostate makes variant default-constructible.
        * Useful when first type in variant has no default constructor.
        * Index 0 = monostate, can be visited like any other type.

    ===============================================================
    */

    // std::variant<NotSimple, int> cannotInit; // error
    std::variant<std::monostate, NotSimple, int> okInit;
    std::cout << "monostate for default variant initialization:\n" << okInit.index() << "\n\n";

    

    // pass a value during default initialization:
    std::variant<int, float, std::string> intFloatString { 10.5f };
    std::cout << "Passing a value during default initialization:\n" << intFloatString.index() << ", value " << std::get<float>(intFloatString) << "\n\n";
    


    // ambiguity!!!
    // double might convert to float or int, so the compiler cannot decide
        
    //std::variant<int, float, std::string> intFloatString { 10.5 };
    
    // ambiguity resolved by std::in_place. std::in_place can be used to explicitly mention what type should be used. 
    std::variant<long, float, std::string> longFloatString { std::in_place_index<1>, 7.6 }; // double!
    std::cout << "Using std::in_place to explicitly mention which type should be used:\n" << longFloatString.index() << ", value " << std::get<float>(longFloatString) << "\n\n";
        


    // in_place for complex types
    std::variant<std::vector<int>, std::string> vecStr { std::in_place_index<0>, { 0, 1, 2, 3 }};
    std::cout << vecStr.index() << ", vector size " << std::get<std::vector<int>>(vecStr).size() << "\n\n";
    


    // copy-initialize from other variant:
    std::variant<int, float> intFloatSecond { intFloat };
    std::cout << intFloatSecond.index() << ", value " << std::get<int>(intFloatSecond) << "\n\n";
}