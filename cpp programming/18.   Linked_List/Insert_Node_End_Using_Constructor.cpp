#include<iostream>
using namespace std;
class node{

    public:
    int data;
    node *next;
    
    node(int value){
        data = value;
        next = NULL;
    }
   
};
int main(){
    node * head , *tail;
    head = tail = NULL;
    // insert all elements of arr at the end of the linked list one by one
    int arr[]={1,2,3,4,5,6};
    
    for(int i=0 ; i<6 ; i++){

        // linded list doesnt exists
        if(head==NULL){
            head = new node(arr[i]);
            tail = head;
        }
        // linded list exists
        else{
           tail->next= new node(arr[i]);
           tail = tail->next;
        }
    }

    // print the linked list
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}