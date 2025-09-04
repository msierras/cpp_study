// custom_structured_bindings.cpp 
// example for "C++17 In Detail" 
// by Bartlomiej Filipek 
// 2018/2019

#include <iostream>
#include <tuple>

class UserEntry {

    private:
        std::string name;
        unsigned age { 0 };
        size_t cacheEntry { 0 }; // intentionally NOT part of the tuple interface
    
    public:
        // Default constructor
        UserEntry() { }

        // Class member function(s)
        void Load() { 
            // simulate loading from db...
            name = "John";
            age = 45;
            cacheEntry = 10; // internal/cache detail, not exposed via structured bindings
        }
        
        // Public getters used by get<I>(...) below
        std::string GetName() const { return name; }
        unsigned GetAge() const { return age; }
        

};

// ---- TUPLE-LIKE INTERFACE (part 1): provide get<I>(UserEntry)
// ADL (argument-dependent lookup) will find this because it's in the same namespace as UserEntry.
// Returns BY VALUE here (copies), since the getters return by value.
template <size_t I>
auto get(const UserEntry& u) {
    if constexpr (I == 0) return u.GetName(); // first element: name
    else if constexpr (I == 1) return u.GetAge(); // second element: age
    // no other I supported; accessing get<2> would be ill-formed
}

// ---- TUPLE-LIKE INTERFACE (part 2): specialize tuple_size/tuple_element
// It is allowed to specialize these standard traits for user-defined types.
namespace std {
    // Tell the compiler there are exactly 2 bindable elements.
    template <>
    struct tuple_size<UserEntry> : std::integral_constant<size_t, 2> { };

    // Specify the type of each element.
    template <> struct tuple_element<0, UserEntry> { using type = std::string; };
    template <> struct tuple_element<1, UserEntry> { using type = unsigned;    };
}

int main () {
    UserEntry u;
    u.Load();

    // Structured binding: decomposes using tuple-like protocol:
    // - tuple_size<UserEntry> -> 2
    // - tuple_element<I, UserEntry> for the types
    // - get<0>(u) and get<1>(u) to fetch values
    auto [name, age] = u; // copies the values (because get returns by value)

    std::cout << name << ", " << age << '\n'; // prints: John, 45
}
