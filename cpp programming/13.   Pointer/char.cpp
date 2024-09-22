#include<iostream>
using namespace std;
   
int main(){
    //char
    char name='r';
    char *ptr1=&name;
    cout<<*ptr1<<endl;
    cout<<(void*)ptr1<<endl;
    cout<<(void*)&name<<endl;
    //char array
    char arr[]="ramid";
    char *ptr = arr;
    cout<<arr<<endl;
    cout<<(void*)ptr<<endl;
    cout<<(void*)arr<<endl;
}