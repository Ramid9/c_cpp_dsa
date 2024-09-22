#include<iostream>
using namespace std;
class node{

    public:
    int data;
    node *next;
   
};
int main(){
    node * head;
    head = NULL;
    // insert all elements of arr at the start of the linked list
    int arr[]={1,2,3,4,5,6};
    
    // create linked list
    for(int i=0 ; i<6 ; i++){

        // linded list doesnt exists
        if(head==NULL){
            head = new node;
            head->data = arr[i];
            head->next = NULL;
        }
        // linded list exists
        else{
            node *temp;
            temp = new node;
            temp->data = arr[i];
            temp->next = head;
            head = temp;
        }
    }
    // print the linked list
    cout<<"Linked List:\n";
    node *print = head;
    while(print!=NULL){
        cout<<print->data<<" ";
        print=print->next;
    }


    // delete at any position
    int pos;
    cout<<"\nEnter position: ";
    cin>> pos;
    if(pos==1){
        node* temp=head;
        head = head->next;
        delete temp;
        
    }
   else{
    node* curr = head;
    node* prev = NULL;
    pos--;
    while(pos){
        prev = curr;
        curr = curr->next;
        pos--;
    }
    prev->next = curr->next;
    delete curr;
   }
    cout<<"Linked List after deletion:\n";
    // print the linked list
    node *print1 = head;
    while(print1!=NULL){
        cout<<print1->data<<" ";
        print1=print1->next;
    }
}