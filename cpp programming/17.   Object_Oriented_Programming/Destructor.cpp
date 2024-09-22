// destructor is an instance member fn that is called automatically when the object is going to be destroyed
#include<iostream>
using namespace std;

class customer{
    string name;
    int *balance;
    
    public:
    //constructor
    customer(){
        name = "ramid";
        // allocate memory for bal
        balance=new int;
        *balance=9;
        cout<<"Constructor is called\n";

    }

    // deletes the heap memory
    ~customer(){
        delete  balance;
        cout<<"Destructor is called\n";
    }
};
int main(){
    customer a;
}