#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
node* head=NULL;
int main(){
    node* ptr ;
    node* ptr1;
    ptr = new node;
    head = ptr;

    bool yes_no;
    // create list
    do{
        ptr1 = ptr;
        cout<<"Enter item of information: ";
        cin>>ptr->data;

        ptr->next = new node;
        ptr= ptr->next;

        cout<<"Want to create any more node(1,0)?: ";
        cin>>yes_no;

    }while(yes_no==1);

    ptr1->next = NULL;
    
    //print list
    node* print = head;
    cout<<"Entered list: \n";
    while(print){
        cout<<print->data<<" ";
        print = print->next;
    }
   

    // Rotate list k times
    int k;
    cout<<"Enter number of rotation: ";
    cin>>k;
        // find the size of the list
    ptr = head;
    int size = 0;
    while(ptr->next != NULL){
        size++;
        ptr = ptr->next;
    }
    size++;

    if(k>size){
        k=size%k;
    }
    node* end = ptr;
        //find size-k node
    ptr = head;
    for(int i=1 ; i<size-k ; i++){
        ptr = ptr->next;
    }
    node* new_first = ptr->next; 
    ptr->next = NULL;

    end->next = head;
    head = new_first; 
    
    // print rotated list
    cout<<"\nk times Rotated List:\n";
    node* print1 = head;
    while(print1){
        cout<<print1->data<<" ";
        print1= print1->next;
    }
}