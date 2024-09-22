#include<iostream>
using namespace std;
class Stack{
    
    int *arr;
    int max;
    int top;

    public:
    bool flag; // if 1 empty , if 0 not empty
    Stack(int s){
        arr = new int[s];
        max = s;
        top = -1;
    }

    void push(){
        int element;
        cout<<"Enter the element to push into the stack: ";
        cin>>element;
        if(top>=max-1){
            cout<<"Stack Overflow.\n";
            return;
        }
        else{
            top++;
            arr[top]=element;
            cout<<"Pushed "<<element<<" into the stack.\n";
            flag = 0;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"Stack Underflow\n";
            return;
        }
        else{
            top--;
            cout<<"Popped "<<arr[top+1]<<" from the stack";
            if(top==-1)
                flag = 1;
        }
        return;
    }
    int peek(){
        if(top==-1){
            cout<<"Stack is Empty\n";
            return -1;
        }
        else{
            return arr[top];
        }
    }
    bool isEmpty(){
        return top==-1;
    }
    int isSize(){
        return top+1;
    }

    void print(){
        for(int i=0 ; i<=top ; i++){
            cout<<arr[i]<<"  ";
        }
    }
};


int main(){
    int max;
    cout<<"Enter the maximum size of the stack: ";
    cin>>max;
    Stack stack(max);

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
            case 3: if(stack.flag==0)  // atleast one element is present
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