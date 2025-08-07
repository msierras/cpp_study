// Friend functions can be shared by two or more classes.

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
        friend bool sameColor(Cube x, Cylinder y);
        //....
};


class Cylinder{
    private:
        colors color;
    public:
        Cylinder(colors c) { color = c; }
        friend bool sameColor(Cube x, Cylinder y); 
        //....
};


bool sameColor(Cube x, Cylinder y){
    if(x.color == y.color) return true;
    else return false;
}

int main(){
    Cube cube1(red);
    Cube cube2(green);
    Cylinder cyl(green);

    if( sameColor(cube1, cyl) ) cout << "cube1 and cyl are the same color.\n";
    else cout << "cube1 and cyl are different colors.\n";

    if( sameColor(cube2, cyl) ) cout << "cube2 and cyl are the same color.\n";
    else cout << "cube2 and cyl are different colors.\n";

    return 0;
}