#include<iostream>
using namespace std;
int main(){
    int n;
    char ch;
    cout<<"Enter the number : ";
    cin>>n;

    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j <= n-i ; j++){
            cout<<"  ";
        }
        ch = 'E';
        for(int j=1 ; j <=i ; j++){
            cout<<ch<<" ";
            ch--;
        }
        cout<<endl;
    }
}