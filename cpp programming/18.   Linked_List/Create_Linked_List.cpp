#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
node* head=NULL;
int main(){
    node* ptr ;
    node* ptr1;
    ptr = new node;
    head = ptr;

    bool yes_no;
    // create list
    do{
        ptr1 = ptr;
        cout<<"Enter item of information: ";
        cin>>ptr->data;

        ptr->next = new node;
        ptr= ptr->next;

        cout<<"Want to create any more node(1,0)?: ";
        cin>>yes_no;

    }while(yes_no==1);

    ptr1->next = NULL;
    
    //print list
    node* print = head;
    cout<<"Entered list: \n";
    while(print){
        cout<<print->data<<" ";
        print = print->next;
    }
}