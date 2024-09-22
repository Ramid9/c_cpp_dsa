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
    vector<int>ans;
    node* ptr = head;
    // store all list data into ans 
    while(ptr){
        ans.push_back(ptr->data);
        ptr = ptr->next;
    }
    // now store all ans elements into linked list from last 
    int i= ans.size()-1;
    ptr = head;
    while(ptr){
        ptr->data=ans[i];
        i--;
        ptr = ptr->next;
    }


    
    // print the reversed linked list
    cout<<"\nReversed List:\n";
    node *print = head;
    while(print!=NULL){
        cout<<print->data<<" ";
        print=print->next;
    }

}