// Demonstrate flags() and unsetf().

#include <iostream>
using namespace std;


int main(){
    /* Notice that the type fmtflags is preceded by ios:: when f is declared. This is necessary since
    fmtflags is a type defined by ios. In general, whenever you use the name of a type or enumerated 
    constant that is defined by a class, you must qualify it with the name of the class. */
    ios::fmtflags f;

    f = cout.flags();   // get the format flags

    if(f & ios::showpos) cout << "showpos is set for cout.\n";
    else cout << "showpos is cleared for cout.\n";
    cout << 123 << "\n";

    cout << "\nSetting showpos for cout.\n";
    cout.setf(ios::showpos);    // set the showpos flag.

    f = cout.flags();    // get the format flags.
    if(f & ios::showpos) cout << "showpos is set for cout.\n";
    else cout << "showpos is cleared for cout.\n";
    cout << 123 << "\n";

    cout << "\nClearing showpos for cout.\n";
    cout.unsetf(ios::showpos);  // clear the showpos flag.

    f = cout.flags();
    if(f & ios::showpos) cout << "showpos is set for cout.\n";
    else cout << "showpos is cleared for cout.\n";
    cout << 123 << "\n";


    return 0; 
}