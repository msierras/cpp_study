// Overload the constructor 

#include <iostream>
using namespace std;

class Sample{
    public:
        int x, y;

        // Overload the default constructor.
        Sample() { x=y=0;}
        
        // Constructor with one parameter
        Sample(int i) { x=y=i; }
        
        // Constructor with two parameters.
        Sample(int i, int j) { x=i; y=j; }
};


int main(){
    Sample t;   // invoke default constructor
    Sample t1(5);   // use Sample(int)
    Sample t2(9, 10);   // use Sample(int, int)

    cout << "t.x: " << t.x << " , t.y: " << t.y << "\n";
    cout << "t1.x: " << t1.x << " , t1.y: " << t1.y << "\n";
    cout << "t2.x: " << t2.x << " , t2.y: " << t2.y << "\n";

    return 0;
}