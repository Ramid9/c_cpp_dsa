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




void delete_last(){
    if(head==NULL){
        cout<<"List is empty";
        return;
    }
    else{
        // only one node is present
        if(head->next==NULL){
            delete head;
            head=NULL;
        }
        // more than 1 node present
        else{
            node* temp = head;
            while(temp->next){
                temp = temp->next;
            }

            temp->prev->next=NULL;
            delete temp;
        }
    }
    return;
}

void delete_first(){
    if(head==NULL){
        cout<<"List is empty";
        return;
    }
    else{
        // only one node is present
        if(head->next==NULL){
            delete head;
            head=NULL;
        }
        // more than 1 node present
        else{
            node* temp = head;
            head= head->next;
            head->prev=NULL;
            delete temp;
        }
    }
    return;
}
void delete_any(){
    if(head==NULL){
        cout<<"List is empty";
        return;
    }
    int pos ;
    cout<<"Enter position to delete the node: ";
    cin>>pos;
    if(pos==1){
        delete_first();
        return;
    }
    node* temp= head;
    pos--;
    while(pos){
        temp = temp->next;
        if(temp->next==NULL){
            delete_last();
            return;
        }
        pos--;
    }
    temp -> prev -> next = temp->next;
    temp -> next -> prev = temp->prev;
    delete temp;
    return;
}
void display_list(){
    if(head==NULL){
        cout<<"List is empty.";
        return;
    }
    node* ptr = head;
    while(ptr!=NULL){
        if(ptr->next==NULL){
            cout<<ptr->data;
            return;
        }
        cout<<ptr->data<<"<===>";
        ptr = ptr->next;
    }

}
void create_list(){
    node* ptr;
    node* ptr1;

    ptr = new node;
    ptr->next=NULL;
    ptr->prev=NULL;
    head = ptr;

    int yes_no;
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
    return;
}
int main(){
    int ch;
    int cont=1;
    while(cont){
        cout<<"1. Create Doubly Linked list: \n";
        cout<<"2. Display Doubly Linded list: \n";
        cout<<"3. Delete first node: \n";
        cout<<"4. Delete last node: \n";
        cout<<"4. Delete any node: \n";
       
        cout<<"Enter choice(1/2/3/4/5): ";
        cin>>ch;
        switch(ch){
            case 1:create_list(); break;
            case 2:display_list(); break;
            case 3:delete_first(); break;
            case 4:delete_last(); break;
            case 5:delete_any(); break;
            default: cout<<"Invalid input.\n";
        }
        cout<<"\n\nWant to continue? (1/0)";
        cin>>cont;
    }
}