// Demonstrate class specialization.

#include <iostream>
using namespace std;


template <class T> class MyClass{
    private:
        T x;
    
    public:
        /* Constructor(s) */
        MyClass(T a){
            cout << "Inside generic MyClass\n";
            x = a;
        }

        /* Member function(s) */
        T getx() { return x; } 
};

// Explicit specialization for int.
template<> class MyClass<int>{
    private:
        int x;
    public:
        /* Constructor(s) */
        MyClass(int a){
            cout << "Inside MyClass<int> specialization\n";
            x = a * a;
        }

        /* Member function(s) */
        int getx() { return x; }
};


int main(){
    MyClass<double> d(10.1);    // This uses generic MyClass 
    cout << "double: " << d.getx() << "\n";

    MyClass<int> i(5);  // This uses the explicit specialization of MyClass
    cout << "int: " << i.getx() << "\n";



    return 0; 
}