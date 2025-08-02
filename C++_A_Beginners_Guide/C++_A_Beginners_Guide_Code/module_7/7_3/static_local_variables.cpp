// Compute a running average of numbers entered by the user.

#include <iostream>
using namespace std;


/* Function prototype(s)*/


int running_avg(int i);


int main(){

    int num;

    do{
        cout << "Enter numbers (-1 to quit): ";
        cin >> num;
        if(num != -1) cout << "Running average is: " << running_avg(num);
        cout << "\n";
    } while(num > -1);


    return 0;

}


int running_avg(int i){
    /*
        When you declare a variable as static inside a function, 
        it's initialized only once, on the first call to the function.
        So, in running_avg(), count and sum are 0 only on its first call,
        the following counts "ignore" the initialization and increment
        both by 1.
    */ 

    static int sum = 0, count = 0;  // Because sum and count are static, they will retain their values between calls to running_avg().

    sum += i;

    count++;

    return sum/count;
}