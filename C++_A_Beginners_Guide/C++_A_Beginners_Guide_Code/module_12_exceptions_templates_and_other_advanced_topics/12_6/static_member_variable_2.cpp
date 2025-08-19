// Refer to static variable through its class name.

#include <iostream>


class Test{
    private:
    
    public:
        static int num; 
        /* Member Function(s) */
        void setnum(int i) { num = i ;}
        void shownum() { std::cout << num << std::endl; }

};

int Test::num;  // define num


int main(){
    Test a,b;

    Test::num = 100;    // Refer to num through its class name Test since static int num is public.

    a.shownum();    // prints 100
    b.shownum();    // prints 100

    // Set num through an object
    a.num = 200;

    a.shownum();    // prints 200
    b.shownum();    // prints 200


    return 0;
}
