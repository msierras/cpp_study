/*
    Module 2 Mastery Check

    14. Write a program that finds all the prime numbers between 1 and 100.
*/

#include <iostream>
using namespace std;

bool isPrime(int n){

    // if input for n is less than or equal to 1 then it is automatically not prime and we return false (0)
    if(n <= 1){
        return false;
    }

    // this for loops checks if n % i returns a 0, if true then n is non-prime and we return false
    for(int i = 2; i <= (n/2); i++){
        if(n % 1 == 0){
            return false;
        }
    }

    // if we reach here then that means n % 1 == 0 never occured and this n is a prime number
    return true;
}

int main(){

   cout << isPrime(4);




}