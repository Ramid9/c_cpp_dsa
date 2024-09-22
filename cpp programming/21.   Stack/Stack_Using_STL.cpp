#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>S;
    S.push(9);
    S.push(6);
    S.push(3);

    cout<<S.size()<<endl;
    cout<<S.top()<<endl;
    S.pop();
    cout<<S.size()<<endl;

    cout<<S.empty()<<endl;
}