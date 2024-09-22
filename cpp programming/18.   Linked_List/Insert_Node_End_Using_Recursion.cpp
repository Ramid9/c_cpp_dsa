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
// this fn returns address
node* Creat_Linked_List(int arr[],int index , int size){

    // last node has NULL in its next part
    if(index==size)
        return NULL;

    // create node
    node* temp;
    temp = new node(arr[index]);
    temp->next = Creat_Linked_List(arr,index+1,size); // address of next node

    return temp; // to its previous node;
}
int main(){
    
    node * head ;
    head = NULL;
    // insert all elements of arr at the end of the linked list one by one
    int arr[]={1,2,3,4,5,6};
    
    head = Creat_Linked_List(arr,0,6);

    // print the linked list
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}