#include <iostream>
#include <typeinfo>


class MyClass{
    // ...
};


int main(){
    int i, j;
    float f;
    MyClass ob;
    
    /* Use typeid to botain the type of an object at runtime. */
    std::cout << "The type of i is: " << typeid(i).name();
    std::cout << std::endl;
    std::cout << "The type of f is: " << typeid(f).name();
    std::cout << std::endl;
    std::cout << "The type of ob is: " << typeid(ob).name();
    std::cout << "\n\n";

    if(typeid(i) == typeid(j)) std::cout << "The types of i and j are the same\n";

    if(typeid(i) != typeid(f) ) std::cout << "The types of i and f are not the same\n";







    return 0; 
}



/* 
    Our output with our compiler is the following : 

    The type of i is: i // the i stands for int 
    The type of f is: f // the f stands for float 
    The type of ob is: 7MyClass // here, the 7 means the identifier length (MyClass is 7 characters), followed by the name MyClass.

    The types of i and j are the same
    The types of i and f are not the same

    NOTE: The output is dependent on your compiler!
*/