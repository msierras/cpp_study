// optional_reset.cpp
// example for "C++17 In Detail"
// by Bartlomiej Filipek
// 2018/2019

#include <optional>   // for std::optional
#include <iostream>   // for std::cout, std::ostream

// A simple class to represent a user record that may or may not have a nickname or age
class UserRecord {
public:
    // Constructor:
    // Takes a required 'name' and two optional values: 'nick' and 'age'
    // std::move(name) avoids unnecessary copies
    UserRecord (std::string name, std::optional<std::string> nick, std::optional<int> age)
    : mName{std::move(name)}, mNick{std::move(nick)}, mAge{age}
    {
    }

    // Overload operator<< so that we can directly print UserRecord with std::cout
    friend std::ostream& operator << (std::ostream& stream, const UserRecord& user);

private:
    std::string mName;              // always required
    std::optional<std::string> mNick; // optional nickname
    std::optional<int> mAge;          // optional age
};

// Output operator definition
std::ostream& operator << (std::ostream& os, const UserRecord& user) {
    os << user.mName;  // always print the name
    
    // Check if nickname is present
    if (user.mNick)
        os << ' ' << *user.mNick;   // dereference optional to access its value

    // Check if age is present
    if (user.mAge)
        os << ' ' << "age of " << *user.mAge;

    return os;
}

int main() {
    // User with all fields set
    UserRecord tim { "Tim", "SuperTim", 16 };

    // User with only a name, no nickname or age (set to std::nullopt)
    UserRecord nano { "Nathan", std::nullopt, std::nullopt };
    
    // Printing will adapt automatically:
    // Tim SuperTim age of 16
    // Nathan
    std::cout << tim << '\n';
    std::cout << nano << '\n';

    return 0;   // (optional in modern compilers, but here for clarity)
}
