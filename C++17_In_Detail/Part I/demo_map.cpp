// demo_map.cpp
// example for "C++17 In Detail"
// by Bartlomiej Filipek
// 2018/2019

#include <iostream>
#include <map>

int main() {
    // Creation of a map that will have a string as the key and int as its value(s).
    // Adding two key-pairs at initialization as well.
    std::map<std::string, int> mapUsersAge { { "Alex", 45 }, { "John", 25 } };
    
    // Creation of map mapCopy, it will copy the contents of mapUserAge into itself. 
    // This uses class template argument deduction (CTAD), so you don't need to specify 
    // <std::string, int> again (C++17 feature)
    std::map mapCopy{mapUsersAge};
    
    /*  
        insert_or_assign tries to insert the key "John" with value 26.
            If "John" doesn't exist, it inserts it and returns {iterator, true}.
            If "John" already exists, it updates the value to 26 and returns {iterator, false}.

        auto [iter, wasAdded] is structured binding (C++17), unpacking the returned pair into iter 
        (iterator to the element) and wasAdded (bool).

        The if checks !wasAdded (meaning the element already existed and was reassigned).

        std::cout << iter->first << " reassigned...\n";
            If the previous if condition is true, it prints the key that was reassigned (in this case "John") 

        The if statement has initializer and condition parts, everything left of !wasAdded is the initializer and 
        everything to the right is the condition. Basically, the initializer is "setting up" for the condition. 
    */
    if (auto [iter, wasAdded] = mapCopy.insert_or_assign("John", 26); !wasAdded)
        std::cout << iter->first << " reassigned...\n";
        
    /*
        Range-based for loop to iterate through all elements of mapCopy.
        
        [key, value] uses structured bindings to unpack each std::pair<const Key, T> into key and value.

        std::cout << key << ", " << value << '\n';
            Prints each key and value pair on its own line.
    */
    for (const auto& [key, value] : mapCopy)
        std::cout << key << ", " << value << '\n';

    // Adding return 0 to make it clearer where the program ends
    return 0; 
}