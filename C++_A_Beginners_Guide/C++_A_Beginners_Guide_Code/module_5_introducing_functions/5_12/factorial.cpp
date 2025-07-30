// Demonstrating factorial using recursion and iteratively. 

#include <iostream>
using namespace std;

int factr(int n);
int fact(int n);


int main(){

    // using the recursive version
    cout << "4 factorial recursively is: " << factr(4);
    cout << "\n";


    // using iterative version
    cout << "4 factorial iteratively is: " << fact(4);
    cout << "\n";


    return 0; 
}


// Recursive version.
int factr(int n){
    int answer; 

    if(n==1) return 1;  // !1 = 1 * 1 = 1, so factr(1) is just 1.
    answer = factr(n-1) * n;

    return answer; 

}


// Iterative version.
int fact(int n){
    int t, answer;

    if(n==1) return 1;

    answer = 1;
    for(t=1; t<=n; t++) answer = answer*t;
    return answer; 
}