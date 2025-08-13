// A short example that uses a virtual function.

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
        void who(){ // redefine who() for D2
            cout << "Second derivation\n";
        }
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
    p->who();   // access D2's who


    return 0;
}  