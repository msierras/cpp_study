// ---------- First File ----------

#include <iostream>
using namespace std;


/* Function prototype(s) */
int running_avg(int i);
void reset();


int main(){

    int num;

    do{
        cout << "Enter numbers (-1 to quit, -2 to reset): ";
        cin >> num;
        if(num == 2){
            reset();
            continue;
        }

        if(num != -1) cout << "Running average is: " << running_avg(num);
        cout << "\n";
    } while(num != -1);


    return 0;
}

/* 
    To retrieve functions from static_global_variables_f2.cpp run the following code
        g++ static_global_variables_f1.cpp  static_global_variables_f2.cpp -o program
    We're essentially compiling both at the same time! NOTE: extern is not needed here
    since we provided the function prototypes in this file.


    If the function prototypes weren't included in this file we would have to add the following code:
        extern int running_avg(int);  // function returns int, takes one int
        extern void reset();          // function returns void, takes no arguments
*/