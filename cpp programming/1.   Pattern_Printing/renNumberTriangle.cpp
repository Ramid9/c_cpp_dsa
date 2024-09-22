#include<iostream>
using namespace std;
int main(){
    int a;
    for(int i=1 ; i<=5 ; i++){
        for(int j=1 ; j <= 5-i ; j++){
            cout<<"  ";
        }
        a = i;
        for(int j=1 ; j <=i ; j++){
            cout<<a<<" ";
            a--;
        }
        cout<<endl;
    }
}