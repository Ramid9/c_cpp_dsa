#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int i = 1;
    while(i<=n){
        if(i%2 == 0)
            cout<<i;
        else 
            cout<<"    "<<i<<endl;
        i++;
    }
    return 0;
}