    try{
        throw derived;
    }
    catch(D d){
        cout << "This wont execute.\n";
    }
    catch(B b){
        cout << "Caught a base class.\n";
    }