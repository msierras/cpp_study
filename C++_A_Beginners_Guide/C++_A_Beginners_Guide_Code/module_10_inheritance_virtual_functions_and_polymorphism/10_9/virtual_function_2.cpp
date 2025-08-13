/* 
    Once a function is declared as virtual, it stays virtual no matter how many layers of derived classes it may pass 
    through. For example, if D2 is derived from D1 instead of B, then who() is still virtual.
*/

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

// Derive from D1, not B. After running the program you'll see that it still works as intended!
class D2 : public D1{
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