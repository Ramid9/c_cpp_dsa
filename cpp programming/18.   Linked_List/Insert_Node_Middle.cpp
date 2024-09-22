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

    // insert in the middle(pos=3,value=90)
    int pos=3;
    int value=90;
    node* temp = head;
    // to add in 3 position 2 jumps are required
    pos--; 
    while(pos){
        temp = temp->next;
        pos--;
    }
    //now temp is in 3rd position
    //create the node which you want to add 
    node* temp2 = new node;
    temp2->data=value;
    
    temp2 -> next = temp->next; // first connect the right node
    temp->next = temp2;// then connect with the left node


    // print the linked list
    node *print = head;
    while(print!=NULL){
        cout<<print->data<<" ";
        print=print->next;
    }
}