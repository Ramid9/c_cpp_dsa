#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int roll;
};
int main(){
    // heap memory allocated
    student *S = new student;

    (*S).name="Ramid";
    (*S).roll=9;

    cout<<S->name<<" "<<S->roll<<endl;
}