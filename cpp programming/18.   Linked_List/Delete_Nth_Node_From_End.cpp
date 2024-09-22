#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
node* head=NULL;

void delete_Nth_node(){
    int pos;
    cout<<"Enter the position from the end:";
    cin>>pos;
    node* curr=head;
    node* prev = NULL;
    // FIND SIZE OF THE LIST
    int size = 0 ;
    while(curr){
        size++;
        curr= curr->next;
    }
    curr = head;
    // FIND (POS-1)th & ( POS) th NODE
    int step = size - pos;
    while(step){
        prev = curr;
        curr = curr -> next;
        step--;
    }
    prev -> next = curr -> next;
    delete curr;
    return;
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
        cout<<"3. Delete Nth node from the end\n";
        cout<<"Enter choice(1/2/3)";
        cin>>ch;
        switch(ch){
            case 1:create_list(); break;
            case 2:display_list(); break;
            case 3:delete_Nth_node(); break;
            default: cout<<"Invalid input.\n";
        }
        cout<<"\n\nWant to continue? (1/0)";
        cin>>cont;
    }
}