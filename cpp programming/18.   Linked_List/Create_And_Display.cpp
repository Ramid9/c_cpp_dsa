#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};

// Global variable
node* head=NULL;
node* tail=NULL;

void display_list(){
    node* ptr = head;
    while(ptr!=NULL){
        if(ptr->next==NULL){
            cout<<ptr->data;
            return;
        }
        cout<<ptr->data<<"--->";
        ptr = ptr->next;
    }
    return;
}
void create_list(){
    node* ptr;
    ptr = new node;
    head = ptr;
    bool yes_no;

    do{
        cout<<"Enter the data to insert in the node:";
        cin>>ptr->data;
        
        cout<<"\nWant to add one more node? (1/0) : ";
        cin>>yes_no;

        if(yes_no==1){
            ptr->next = new node;
            ptr = ptr->next;
        }
        
    }while(yes_no==1);
    ptr->next = NULL;
    tail=ptr;
}
int main(){
    int ch;
    bool cont=1;
    while(cont){
        cout<<"1. Create Linked list: \n";
        cout<<"2. Display Linked list: \n";
        cout<<"Enter choice(1/2): ";
        cin>>ch;
        switch(ch){
            case 1:create_list(); break;
            case 2:display_list(); break;
            default: cout<<"Invalid input.\n";
        }
        cout<<"\n\nWant to continue? (1/0)";
        cin>>cont;
    }
}