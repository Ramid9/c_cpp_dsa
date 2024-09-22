// It is a special fn that is invoked automatically at the time of object creation
#include<iostream>
using namespace std;

class customer{

    string name;
    int account_number;
    int balance;
    // attribute of class customer
    static int total_customer;

    public:
    

    //parameterized constructor
    customer(string a , int b , int c){

        name = a;
        account_number = b;
        balance = c;
        total_customer++;

    }  
    void display(){

        cout<<name<<" "<<account_number<<" "<<balance<<"  "<<total_customer<<endl;
        
    }
};

 // used to initialize the total_customer  attribute of class customer
int customer::total_customer=0;

int main(){

    customer a1("ramid",1,3000); // automatically calls default constructor
    customer a2("ramid",1,3000);
    a1.display();

}