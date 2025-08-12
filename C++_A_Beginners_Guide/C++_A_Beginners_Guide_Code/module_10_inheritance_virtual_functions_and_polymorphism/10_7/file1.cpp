#include <iostream>
using namespace std;

class B{

    public: 
        // Constructor
        B(){ cout << "Constructing base portion\n"; }

        // Destructor
        ~B(){ cout << "Destructing base portion\n";}
};

class D : public B{
    public:
        //Constructor 
        D(){ cout << "Constructing derived portion\n"; }
        
        // Destuctor 
        ~D(){ cout << "Destructing derived portion\n"; }

};


int main(){
    D ob;

    // do nothing but construct and destruct ob.

    return 0; 
}