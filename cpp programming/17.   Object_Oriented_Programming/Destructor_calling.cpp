#include<iostream>
using namespace std;

class customer{
    string name;
    int *balance;
    
    public:
    //constructor
    customer(string a){
        name = a;
        
        cout<<"Constructor is :"<<name<<endl;

    }

    // deletes the heap memory
    ~customer(){
        
        cout<<"Destructor is :"<<name<<endl;
    }
};
int main(){
    customer a("1") , b("2") , c("3");
}