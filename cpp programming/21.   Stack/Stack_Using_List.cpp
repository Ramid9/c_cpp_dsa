#include<iostream>
using namespace std;
class node{

    public:
    int data;
    node* next;

    node(int value){
        data = value;
        next = NULL;
    }

};
class Stack{
    
    node* top ;
    int size;

    public:
    
    Stack(){
        top = NULL;
        size = 0;
    }

    void push(){
        
        int element;
        cout<<"Enter the element to push into the stack: ";
        cin>>element;
        node* temp = new node(element);
        if(temp==NULL){   // if heap memory is also full
            cout<<"Stack overflow\n";
            return;
        }
        temp->next = top;
        top = temp;
        size++;
    }

    void pop(){
        if(top==NULL){
            cout<<"Stack Underflow\n";
            return;
        }
        else{
            node* temp = top;
            top = top->next;
            cout<<"Popped "<<temp->data<<" from the stack";
            delete temp;
            size--;
        }
        return;
    }
    int peek(){
        if(top==NULL){
            cout<<"Stack is Empty\n";
            return -1;
        }
        else{
            return top->data;
        }
    }
    bool isEmpty(){
        return top==NULL;
    }
    int isSize(){
        return size;
    }

    void print(){
        node* temp=top;
        while(temp){
            cout<<temp->data<<"--->";
            temp = temp->next;
        }
    }
};


int main(){
    
    Stack stack;

    int ch;
    bool cont=1;
    while(cont){
        cout<<"1. Push element: \n";
        cout<<"2. Pop element: \n";
        cout<<"3. Find peek element: \n";
        cout<<"2. Find is Empty: \n";
        cout<<"5. Find the number of elements of stack : \n";
        cout<<"6. Print the stack elements: \n";
        
        cout<<"Enter choice(1/2/3/4/5): ";
        cin>>ch;
        switch(ch){
    
            case 1:stack.push(); break;
            case 2:stack.pop(); break;
            case 3: if(stack.isSize())  // atleast one element is present
                        cout<<stack.peek(); 
                    break;

            case 4:cout<<stack.isEmpty(); break;
            case 5:cout<<stack.isSize(); break;
            case 6:stack.print(); break;
            default: cout<<"Invalid input.\n";
        }
        cout<<"\n\nWant to continue? (1/0)";
        cin>>cont;
    }
}