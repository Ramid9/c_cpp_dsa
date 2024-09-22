#include<iostream>
#include<vector>
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

    // creat list
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
    cout<<"List:\n";
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }



    // reverse linked list
    node* curr = head ;
    node*  prev = NULL ;
    node*  fut = NULL;

    while(curr != NULL){

        fut = curr->next;

        curr->next = prev;
        prev = curr;
        curr = fut;
    }
    head = prev;
    
    // print the reversed linked list
    cout<<"\nReversed List:\n";
    node *print = head;
    while(print!=NULL){
        cout<<print->data<<" ";
        print=print->next;
    }

}