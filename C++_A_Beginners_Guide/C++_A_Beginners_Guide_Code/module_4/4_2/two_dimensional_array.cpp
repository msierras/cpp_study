#include <iostream>
using namespace std;

int main(){

    int nums[3][4];

    for(int t=0; t<3; t++){
        for(int i=0; i<4; i++){
            nums[t][i] = (t*4)+i+1;
            cout << nums[t][i] << " ";
        }
        cout << "\n"; // Adding this to better see output 
    }

    return 0; 
}