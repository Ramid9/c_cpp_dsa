#include<iostream>
using namespace std;
int main(){
    int n , a , b;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        //space print
        for(int j=1 ; j <= n-i ; j++){
            cout<<"  ";
        }
        a = 1;  
        // 1 to row print
        for(int j=1 ; j <=i ; j++){
            cout<<a<<" ";
            a++;
        }
        b = i-1;
        // row-1 to 1 print
        for(int j=1 ; j <= i-1 ; j++){
            cout<<b<<" ";
            b--;
        }
        cout<<endl;
    }
}