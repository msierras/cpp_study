#include <iostream>
using namespace std;

// the addition of another generic type allows us to use two different data types!
template <class Type1, class Type2> void myfunc(Type1 x, Type2 y){
    cout << x << " " << y << " \n";
};


int main(){
    myfunc(10, "hi");
    
    myfunc(0.23, 10L);


    return 0; 
}