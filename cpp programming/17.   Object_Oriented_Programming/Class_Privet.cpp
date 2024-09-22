#include<iostream>
using namespace std;
class student{

    private: // if nothing is mentioned , default is 'private'
    string name; // now we can not access the class members from another fn
    int age;
    float marks;

    public:
    // to take different values
    void set_name(string s){
        name = s;
    }
    void set_age(int a){
        age = a;
    }
    void set_marks(float m){
        marks = m;
    }
    // to print or get different values;
    void get_name(){
        cout<<name<<endl;
    }
    void get_age(){
        cout<<age<<endl;
    }
    float get_marks(){
        return marks;
    }

};
int main(){

    student s1;
    s1.set_name("Ramid");
    s1.set_age(18);
    s1.set_marks(70.00);
    // to print
    s1.get_name(); // first method 
    s1.get_age();
    cout<<s1.get_marks(); // second method
    
}
