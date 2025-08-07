// Use the "this" pointer.

#include <iostream>
using namespace std;


class Test{
    private:
        int i;

    public:
        // setter
        void load_i(int val) { this->i = val; /* same as i=val; */ } 
        // accessor/getter
        int get_i(){ return this-> i; /* same as return i;*/ }
};


int main(){
    Test o;

    o.load_i(100);
    cout << o.get_i();


    return 0;
}