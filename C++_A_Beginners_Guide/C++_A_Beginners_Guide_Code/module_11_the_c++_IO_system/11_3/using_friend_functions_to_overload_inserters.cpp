#include <iostream>
using namespace std;


class ThreeD{
    private:
        int x, y, z;    // 3-D coordinates - now private
    
    public:
        /* Constructor(s) */
        ThreeD(int a, int b, int c) { x = a; y = b; z = c; }

        /* Friend function prototype(s) */
        // Inserter
        friend ostream &operator<<(ostream &stream, ThreeD obj);
};

// Display X, Y, Z coordinates - ThreeD insterter.
ostream &operator<<(ostream &stream, ThreeD obj){
    stream << obj.x << ", ";
    stream << obj.y << ", ";
    stream << obj.z << "\n";
    return stream;  // return the stream
}

int main(){
    ThreeD a(1, 2, 3), b(3, 4, 5), c(5, 6, 7);
    cout << a << b << c;    


    return 0;
}