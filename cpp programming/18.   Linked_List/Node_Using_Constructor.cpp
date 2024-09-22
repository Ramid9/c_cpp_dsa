#include<iostream>
using namespace std;
class node{
    
    int data;
    node *next;
    
    public:
    node(int value){
        data = value;
        next = NULL;
    }
   
};
int main(){
    node * head;
    head = new node(9);
    
}