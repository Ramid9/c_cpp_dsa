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

    // delete last node
    if(head!=NULL){ 
        
        // only 1 node is present
        if(head->next==NULL){
            delete head;
            head = NULL;
        }
        // more than 1 node is present
        else{
            node* curr =head;
            node* prev =NULL;
            while(curr->next!=NULL){
                prev=curr;
                curr=curr->next;
            }
            delete curr;
            prev->next=NULL;
        }

    }

    // print the linked list
    node *print = head;
    while(print!=NULL){
        cout<<print->data<<" ";
        print=print->next;
    }
}