#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
int main(){
    node * head;
    head = new node();
    head-> data = 9;
    head-> next = NULL;
}