// It is a special fn that is invoked automatically at the time of object creation
#include<iostream>
using namespace std;

class customer{

    string name;
    int account_number;
    int balance;

    public:
    // default constructor
    customer(){
        name = "Ramid Roy Majhi";
        account_number = 369963369;
        balance = 300000;
    }

    //parameterized constructor
    customer(string a , int b , int c){
        name = a;
        account_number = b;
        balance = c;
    }

    //constructor overloading
    customer(string name, int account_number){
        this->name=name ;
        this->account_number=account_number;
        balance = 400000;
    }

    //inline constructor
    inline customer(string a):name(a){

    }
    //display
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }

    // copy constructor
    customer(customer &b){
        name = b.name;
        account_number= b.account_number;
        balance = b.balance;
    }

};
int main(){

    customer a1; // automatically calls default constructor
    a1.display();

    // automatically calls parameterized constructor which have 3 parameters
    customer a2("Mamuni Barman",1234567,100000);
    a2.display();

    // automatically calls parameterized constructor which have 2 parameters
    customer a3("Ram",56778890);
    a3.display();

    // automatically calls parameterized constructor which have 1 parameters
    customer a4("BHAGABANA");
    a4.display();

    //copy constuctor
    customer a5(a1); // there is default copy constructor to copy a1 into a5 , but we can not see that
    a5.display();
                    

}