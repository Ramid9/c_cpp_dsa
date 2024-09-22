#include<iostream>
using namespace std;
class student{

    public:
    string name;
    int age;
    float marks;

};
int main(){

    student s1;
    s1.name= "Ramid";
    s1.age=18;
    s1.marks=7;

    student s2;
    s2.name= "Mamuni";
    s2.age=18;
    s2.marks=7;

    cout<<s1.marks<<endl;
}
