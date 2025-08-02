#include <iostream>
using namespace std;


/*
    Enumeration initialization:
    enum type-name { value-list } variable-list
*/ 
enum transport { car, truck, airplane, train, boat };


char name[][20] = {
    "Automobile",
    "Truck",
    "Airplane",
    "Train",
    "Boat"
};


int main() {
    transport how;  // creation of a new transport variable

    how = car;  // how is accesssing the value of car, which in this case is 0
    cout << name[how] << "\n";  // name[how] == name[0]

    how = airplane;  // how is accesssing the value of car, which in this case is 2
    cout << name[how] << "\n";  // name[how] == name[2]
    
    how = train;  // how is accesssing the value of car, which in this case is 3
    cout << name[how] << "\n";  // name[how] == name[3]


}