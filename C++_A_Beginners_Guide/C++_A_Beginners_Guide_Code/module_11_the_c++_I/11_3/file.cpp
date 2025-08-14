// Demonstrate a custom extractor. 

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

        // Extractor 
        friend istream &operator>>(istream &stream, ThreeD &obj);

        
};

// Display X, Y, Z coordinates - ThreeD insterter.
ostream &operator<<(ostream &stream, ThreeD obj){
    stream << obj.x << ", ";
    stream << obj.y << ", ";
    stream << obj.z << "\n";
    return stream;  // return the stream
}

// Get three dimensional vlaues - ThreeD extractor. 
istream &operator>>(istream &stream, ThreeD &obj){
    cout << "Enter X, Y, Z values: ";
    stream >> obj.x >> obj.y >> obj.z;
    return stream;  // return the stream
}

int main(){
    ThreeD obj_a(1, 2, 3);

    cout << obj_a;
    
    cin >> obj_a;

    cout << obj_a;


    return 0;
}