// city_map_iterate.cpp
// example for "C++17 In Detail"
// by Bartlomiej Filipek
// 2018/2019

#include <map>
#include <iostream>
#include <string>

int main() {
    const std::map<std::string, int> mapCityPopulation {
        { "Beijing", 21'707'000 },
        { "Tokyo", 9'273'000 },
        { "London", 8'787'892 },
        { "New York", 8'622'698 },
        { "Rio de Janeiro", 6'520'000 }
    };
    
    // C++17 allows us to bind to a pair of [key, val] so we can use those names in the loop
    for (auto&[city, population] : mapCityPopulation)   
        std::cout << city << ": " << population << '\n';    // Notice how city and population are used here! 

    // Before C++17 we would have had to operate on an iterator from the map - which returns a pair <first, second>!
    // Using the real names key/value is more expressive 
}