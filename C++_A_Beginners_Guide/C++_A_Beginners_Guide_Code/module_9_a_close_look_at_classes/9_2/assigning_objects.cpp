// Demonstrate object assignment

/*
    NOTE: To assign an object to another object, both objects must be of the same type, i.e., 
    from the same class.
*/ 

#include <iostream>
using namespace std;


class Test{
    private:
        int a, b;
    
    public:
        void setab(int i, int j) { a=i; b=j; }
        void showab() {
            cout << "a is " << a << "\n";
            cout << "b is " << b << "\n";
        }
};


int main(){
    Test ob1, ob2;  // creation of two Test objects

    ob1.setab(10, 20);
    ob2.setab(0, 0);
    
    cout << "ob1 before assignment: \n";
    ob1.showab();
    cout << "ob2 before assignment: \n";
    ob2.showab();
    cout << "\n";

    ob2 = ob1;  // assign ob1 to ob2
    cout << "ob1 after assignment: \n";
    ob1.showab();
    cout << "ob2 after assignment: \n";
    ob2.showab();
    cout << "\n";

    ob1.setab(-1, -1);  // change ob1
    cout << "ob1 after changing ob1: \n";
    ob1.showab();
    cout << "ob2 after changing ob1: \n";
    ob2.showab();


    return 0;
}