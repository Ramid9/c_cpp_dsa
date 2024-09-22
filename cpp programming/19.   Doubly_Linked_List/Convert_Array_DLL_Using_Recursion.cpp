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

node* creat_DLL(int arr[],int n,int index,node* back){
    if(index==n){
        return NULL;
    }
    node* temp = new node;
    temp->data = arr[index];
    temp->prev = back;
    temp->next = creat_DLL(arr,n,index+1,temp);
    return temp;
}

void convert_array(){
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter elements of the array: ";
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    head = creat_DLL(arr,n,0,NULL);
    return;
}

void display_list(){
    if(head==NULL){
        cout<<"Empty list";
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
        cout<<"2. Display Doubly+ Linded list: \n";
        cout<<"3. Convert Array into Doubly Linked List: \n";
        cout<<"Enter choice(1/2/3): ";
        cin>>ch;
        switch(ch){
            case 1:create_list(); break;
            case 2:display_list(); break;
            case 3:convert_array(); break;
            default: cout<<"Invalid input.\n";
        }
        cout<<"\n\nWant to continue? (1/0)";
        cin>>cont;
    }
}