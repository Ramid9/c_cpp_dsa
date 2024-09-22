#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};

// Global variable
node* head=NULL;

void remove_every_k_node(){
    int k;
    cout<<"Enter k:";
    cin>>k;

    node* curr=head;
    node* prev=NULL;
    
    k--;   // if k=3 we need to jump 2 steps only to reach the kth position
    int temp = k;
    while(curr){

        while(k){
            prev = curr;
            curr = curr->next;
            k--;
        }
        prev->next = curr->next;
        node* temp1 = curr;
        curr = curr->next;
        delete temp1;

        k = temp;
    }
}
void display_list(){
    node* ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<"--->";
        ptr = ptr->next;
    }

}
void create_list(){
    node* ptr;
    node* prev;
    ptr = new node;
    head = ptr;
    bool yes_no;
    do{
        prev = ptr;
        cout<<"Enter the data to insert in the node:";
        cin>>ptr->data;
        ptr->next = new node;
        ptr = ptr->next;
        cout<<"\nWant to add one more node? (1/0)";
        cin>>yes_no;

    }while(yes_no==1);
    prev->next = NULL;
}
int main(){
    int ch;
    bool cont=1;
    while(cont){
        cout<<"1. Create Linked list: \n";
        cout<<"2. Display Linded list: \n";
        cout<<"3. Remove Every K node: \n";
        cout<<"Enter choice(1/2/3): ";
        cin>>ch;
        switch(ch){
            case 1:create_list(); break;
            case 2:display_list(); break;
            case 3:remove_every_k_node() ; break;
            default: cout<<"Invalid input.\n";
        }
        cout<<"\n\nWant to continue? (1/0)";
        cin>>cont;
    }
}