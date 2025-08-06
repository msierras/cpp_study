// A simple example using an object pointer.

#include <iostream>
using namespace std;


class P_example{

    private:
        int num;
    public:
        void set_num(int val) { num=val; }
        void show_num() { cout << num << "\n"; }

};


int main(){
    P_example ob, *p;   // declare an object and pointer to it

    ob.set_num(1);  // call functions directly on ob
    ob.show_num();

    p = &ob;    // assign p the address of ob
    p->set_num(20); // call functions through a pointer to ob
    p->show_num();  


    return 0;
}