#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
int main(){
    node a;
    a.data = 9;
    a.next = NULL;
}