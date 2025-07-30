// Return a pointer

#include <iostream>
using namespace std;

/* Function prototype(s) */
// Returns a pointer to the first occurrence of `sub` in `str`
// Returns nullptr (0) if `sub` is not found
char* get_substr(char* sub, char* str);

int main() {
    char* substr;

    // Search for the substring "three" in the string "one two three four"
    substr = get_substr("three", "one two three four");

    // If found, this will print the part of the string starting at "three"
    cout << "substr found: " << substr;

    return 0;
}


// Return pointer to substring or null if not found.
char* get_substr(char* sub, char* str) {
    int t;
    char *p, *p2, *start;

    // Loop through each character of str
    for (t = 0; str[t]; t++) {
        p = &str[t];      // Set p to the current starting point in str
        start = p;        // Remember the current position as a potential match start
        p2 = sub;         // Start comparing from the beginning of sub

        // Compare characters while they match and we're not at the end of sub
        while (*p2 && *p2 == *p) {
            p++;          // Move to next char in str
            p2++;         // Move to next char in sub
        }

        // If we reached the end of sub, all characters matched
        if (!*p2) return start;  // Return pointer to start of match in str
    }

    // If loop completes with no match found, return null pointer
    return 0;
}
