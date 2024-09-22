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

void check_palindrome(){
    if(head==NULL){
        cout<<"List is empty.\n";
        return;
    }
    node* ptr = head;
    // FIND SIZE OF THE LIST
    int size= 0;
    while(ptr){
        size++;
        ptr = ptr->next;
    }
    ptr = head;
    // COPY LIST ELEMENTS INTO VECTOR
    vector<int>list(size);
    int i=0;
    while(ptr){
        list[i]=ptr->data;
        ptr = ptr->next;
        i++;
    }

    int start = 0, end = size-1;
    while(start<end){
        if(list[start] !=  list[end]){
            cout<<"Not palindrome";
            return;
        }
        start++, end--;
    }
    cout<<"Palindrome";
    return;

}
void display_list(){
    if(head==NULL){
        cout<<"List is empty.\n";
        return;
    }
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
    delete ptr;
}
int main(){
    int ch;
    bool cont=1;
    while(cont){
        cout<<"1. Create Linked list: \n";
        cout<<"2. Display Linked list: \n";
        cout<<"3. Check Palindrome: \n";
        cout<<"Enter choice(1/2/3): ";
        cin>>ch;
        switch(ch){
            case 1:create_list(); break;
            case 2:display_list(); break;
            case 3:check_palindrome(); break;
            default: cout<<"Invalid input.\n";
        }
        cout<<"\n\nWant to continue? (1/0)";
        cin>>cont;
    }
}