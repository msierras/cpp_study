// A switch without break statements. 

#include <iostream>
using namespace std;

int main(){

    int i;

    for(i=0; i<5; i++){
        switch(i){
            // No break statements for any of the cases!
            // This will cause it so for each iteration of i it will look at a case it matches and then
            // execute all the other ones below as well.
            // e.g., when i = 0 we match case 0 so we print what's in the case but we also print what's in 
            // all the other cases. When i = 1, we match case 1 so we print what's in the case but we also 
            // print waht's in all the other cases.
            case 0:
                cout << "less than 1\n";
            case 1:
                cout << "less than 2\n";
            case 2:
                cout << "less than 3\n";
            case 3:
                cout << "less than 4\n";
            case 4:
                cout << "less than 5\n";
        }
        cout << "\n";
    }


    return 0; 
}