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

    // delete first node
    node *temp = head;
    head=head->next;
    delete temp;

    // print the linked list
    node *print = head;
    while(print!=NULL){
        cout<<print->data<<" ";
        print=print->next;
    }
}