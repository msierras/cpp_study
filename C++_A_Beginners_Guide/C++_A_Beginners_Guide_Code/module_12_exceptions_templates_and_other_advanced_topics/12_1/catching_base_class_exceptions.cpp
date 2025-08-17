// Catching derived classes. This program is wrong!

#include <iostream>
using namespace std;


// Base class
class B{
};

// Class D is derived from base class B with public access control 
class D: public B{
};


int main(){
    D derived;  // initialization of derived object made from class D

    try{
        throw derived;
    }
    /* This catch list is in the wrong order! You must catch derived classes before base classes!*/
    catch(B b){
        cout << "Caught a base class.\n";
    }
    catch(D d){
        cout << "This wont execute.\n";
    }

    /* Here is the correct order: */
    // try{
    //     throw derived;
    // }
    // catch(D d){
    //     cout << "This will now execute.\n";
    // }
    // catch(B b){
    //     cout << "Caught a base class.\n";
    // }
    


    return 0; 
}