#include <iostream>
using namespace std;

/* 
    The only difference between a struct and a class is that by default all 
    members are public in a struct and private in a class. In all othe respects,
    structures and classes are equivalent. 
*/

struct Test{
    int get_i() { return i; }   // these are public
    void put_i(int j) { i=j ;}  // by default

    private:
        int i;

};



int main(){

    Test s;

    s.put_i(10);
    cout << s.get_i();


    return 0;
}


/* 
    Here is the equivalent using a Class:
    
#include <iostream>
using namespace std;



class Test{
    int i;  // private by default

    public: 
    int get_i() { return i; }   // these are public
    void put_i(int j) { i=j ;}  // by default



};



int main(){

    Test s;

    s.put_i(10);
    cout << s.get_i();


    return 0;
}

*/