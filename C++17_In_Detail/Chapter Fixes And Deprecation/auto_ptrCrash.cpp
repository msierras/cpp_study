// Chapter Fixes And Deprecation/auto_ptrCrash.cpp
#include <iostream> 

void doSomething(std::auto_ptr<int> myPtr)
{
    *myPtr = 11;
}

void AutoPtrTest() {
    std::auto_ptr<int> myTest(new int(10));
    doSomething(myTest); 
    *myTest = 12;
}


int main(){
    AutoPtrTest();

    return 0; 
}

/*
    doSomething() takes the pointer by value, but since it’s not a shared pointer, it takes the unique 
    ownership of the managed object. Later when the function is done, the copy of the pointer goes out 
    of scope, and the object is deleted.
    
    In AutoPtrTest() when doSomething is finished the pointer is already cleaned up, and you’ll get 
    undefined behavior, maybe even a crash!

*/