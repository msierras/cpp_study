/* When a derived class does not override a virtual function, then the function as defined in the base class is used. */

#include <iostream>
using namespace std;


class B{
    private:

    public:
        virtual void who(){ // specify a virtual function 
            cout << "Base\n";
        }
};

class D1 : public B{
    private:

    public:
        void who(){ // redefine who() for D1
            cout << "First derivation\n";
        }   
};

class D2 : public B{
    private:

    public:
        // who() not defined.
};


int main(){
    B base_obj;
    B *p;   // base class pointer
    D1 D1_obj;
    D2 D2_obj;

    p = &base_obj;
    p->who();   // access B's who

    p = &D1_obj;
    p->who();   // access D1's who

    p = &D2_obj;
    p->who();   // access B's who because D2 does not redefine it.


    return 0;
}  