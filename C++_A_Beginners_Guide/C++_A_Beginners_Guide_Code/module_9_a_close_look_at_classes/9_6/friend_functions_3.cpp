// A function can be a member of one class and a friend of another.

#include <iostream>
using namespace std;


/* 
    A forward declaration (kind of like a function prototype, you're telling the compiler that that the class Cylinder 
    exists and that we'll define it later). If we didn't declare Cylinder here then we wouldn't be able to use Cylinder
    in the friend function inside of Cube as it would throw us an error!
 */
class Cylinder;   

enum colors { red, green, yellow };

class Cube{
    private:
        colors color;

    public:
        // Cube constructor
        Cube(colors c) { color = c; }

        // friend function
        bool sameColor(Cylinder y); // sameColor() is now a member of Cube! Also, notice that Cube x is no longer a parameter,
                                    // this is due to the fact that sameColor() can now directly access the Cube's color since 
                                    // it's a member function now!
        //....
};


class Cylinder{
    private:
        colors color;
    public:
        Cylinder(colors c) { color = c; }
        friend bool Cube::sameColor(Cylinder y);    // Cube::sameColor() is a friend of Cylinder 
        //....
};


bool Cube::sameColor(Cylinder y){
    if(color == y.color) return true;
    else return false;
}

int main(){
    Cube cube1(red);
    Cube cube2(green);
    Cylinder cyl(green);

    if( cube1.sameColor(cyl) ) cout << "cube1 and cyl are the same color.\n";
    else cout << "cube1 and cyl are different colors.\n";

    if( cube2.sameColor(cyl) ) cout << "cube2 and cyl are the same color.\n";
    else cout << "cube2 and cyl are different colors.\n";

    return 0;
}