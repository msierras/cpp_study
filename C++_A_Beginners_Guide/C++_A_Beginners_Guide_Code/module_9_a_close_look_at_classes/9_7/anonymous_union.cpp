// Demonstrate an anonymous union.

#include <iostream>
#include <cstring>
using namespace std;




int main(){
    // define anonymous union
    
    // Is an anonymous union. Notice that it has no type name!
    union {
        long l;
        double d;
        char s[4];
    };

    // now, reference union eleements directly
    l = 100000;
    cout << l << " ";
    d = 123.2342;
    cout << d << " ";
    strcpy(s, "hi");
    cout << s;


    return 0;
}