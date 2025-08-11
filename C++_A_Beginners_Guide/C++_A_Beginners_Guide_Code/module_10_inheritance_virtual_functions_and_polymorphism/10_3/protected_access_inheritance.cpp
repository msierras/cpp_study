// Demonstrate protected members

#include <iostream>
using namespace std;

// Class B is base class
class B{
    /* using protected allows us to create class members that are private to their class but that can still be inherited
    and accessed by a derived class.*/
    protected:
        int i, j;   // private to B, but accessible to D
    
    public:
    void set(int a, int b) { i=a; j=b; }
    void show() { cout << i << " " << j << "\n"; }

};

class D : public B{
    private:
        int k;
    
    public:
        // D may access B's i and j
        void setk() { k = i * j; }
        void showk() { cout << k << "\n"; }
};


int main(){
    D ob;

    ob.set(2, 3);   // OK, set() is public in B   
    ob.show();  // OK, set() is public in B   

    ob.setk();
    ob.showk();


    return 0;
}