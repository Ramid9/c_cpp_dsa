#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node* next;
};

// Global variable
node* head=NULL;
node* tail=NULL;

void remove_dupli(){
    
    if(head==NULL){
        cout<<"List is empty";
        return;
    }
    // ONLY ONE NODE IS PRESENT 
    if(head->next==NULL){
        cout<<"Only one node is present";
        return;
    }
    node* ptr = head;
    while(ptr->next){
        if(ptr->data == ptr->next->data){
            
            node* temp = ptr->next; // store duplicate node
            ptr->next = ptr->next->next; // skip duplicate node
            delete temp;// delete duplicate node
            
        }
        else{
            ptr = ptr ->next;
        }
    }
    return;
}
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
    int yes_no;

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
    int cont=1;
    while(cont){
        cout<<"1. Create Linked list: \n";
        cout<<"2. Display Linked list: \n";
        cout<<"3. Remove Duplicates from the list: \n";

        cout<<"Enter choice(1/2): ";
        cin>>ch;
        switch(ch){
            case 1:create_list(); break;
            case 2:display_list(); break;
            case 3:remove_dupli(); break;
            default: cout<<"Invalid input.\n";
        }
        cout<<"\n\nWant to continue? (1/0)";
        cin>>cont;
    }
}