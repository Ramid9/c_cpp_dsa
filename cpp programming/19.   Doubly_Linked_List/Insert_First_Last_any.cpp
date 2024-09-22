#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
};

// Global variable
node* head=NULL;
node* tail=NULL;

void insert_pos(){

    if(head==NULL){ // linked list does not exists;
        head = new node;
        cout<<"Enter the data to insert in the node: ";
        cin>>head ->data;
        head->next = NULL;
        head->prev = NULL;
        return;
    }
    int pos;
    cout<<"Enter the position after which the node is to be inserted: ";
    cin>>pos;
    if(pos==0){ // insert at first pos
        node* temp = new node;
        cout<<"Enter the data to insert in the node: ";
        cin>>temp->data;

        temp->next = head;
        head->prev = temp;
        head = temp;
        return;
    }
    node* ptr = head; 
    node* ptr1 = NULL;
    while(pos){
        ptr1 = ptr;
        ptr=ptr->next;
        if(ptr==NULL)// end of list
            break;
        pos--;
    }
    if(ptr==NULL){
        node* temp = new node;
        cout<<"Enter the data to insert in the node: ";
        cin>>temp->data;

        ptr1->next = temp;
        temp->prev = ptr1;
        
        temp->next = NULL;
        return;
    }

    node* temp = new node;
    cout<<"Enter the data to insert in the node: ";
    cin>>temp->data;

    ptr1->next = temp;
    temp->prev = ptr1;

    temp->next = ptr;
    ptr->prev = temp;
}

void insert_last(){
    if(head==NULL){
        head = new node;
        cout<<"Enter the data to insert at last: ";
        cin>>head->data;
        head->next=NULL;
        head->prev=NULL;
    }
    else{
        node* ptr = head;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = new node;
        cout<<"Enter data to insert at last: ";
        cin>>ptr->next->data;
        ptr->next->prev = ptr;
        ptr->next->next = NULL;
    }
    return;
}
void insert_first(){

    if(head==NULL){
        head = new node;
        cout<<"Enter the data to insert at first: ";
        cin>>head->data;
        head->next=NULL;
        head->prev=NULL;
    }
    else{
        node* ptr = new node;
        cout<<"Enter data to insert at first:";
        cin>>ptr->data;

        ptr->next = head;
        head->prev = ptr;

        ptr->prev = NULL;
        head=ptr;
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
        cout<<ptr->data<<"<===>";
        ptr = ptr->next;
    }
    return;

}
void create_list(){
    node* ptr;
    node* ptr1;

    ptr = new node;
    ptr->next=NULL;
    ptr->prev=NULL;
    head = ptr;

    bool yes_no;
    do{
        ptr1 = ptr;
        cout<<"Enter the data to insert in the node:";
        cin>>ptr->data;

        cout<<"\nWant to add one more node? (1/0) : ";
        cin>>yes_no;

        if(yes_no==1){
            ptr->next = new node;
            ptr = ptr->next;
            ptr->prev = ptr1;
        }

    }while(yes_no==1);
    ptr1->next = NULL;
    tail = ptr1;
}
int main(){
    int ch;
    bool cont=1;
    while(cont){
        cout<<"1. Create Doubly Linked list: \n";
        cout<<"2. Display Doubly Linded list: \n";
        cout<<"3. Insert node at first: \n";
        cout<<"4. Insert node at end: \n";
        cout<<"5. Insert node at given position: \n";

        cout<<"Enter choice(1/2/3/4/5): ";
        cin>>ch;
        switch(ch){
            case 1:create_list(); break;
            case 2:display_list(); break;
            case 3:insert_first(); break;
            case 4:insert_last(); break;
            case 5:insert_pos(); break;
            default: cout<<"Invalid input.\n";
        }
        cout<<"\n\nWant to continue? (1/0)";
        cin>>cont;
    }
}