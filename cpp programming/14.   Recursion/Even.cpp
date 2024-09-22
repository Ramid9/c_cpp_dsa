#include<iostream>
using namespace std;
void even(int n){

    if(n==2){// base condition/break condition
        cout<<2<<endl;
        return;
    }
    cout<<n<<endl;

    even(n-2);//calls the even function again and again ... untill a specefic condition met
}
int main(){
    int n;
    cout<<"Enter even number: ";
    cin>>n;
    even(n);
}