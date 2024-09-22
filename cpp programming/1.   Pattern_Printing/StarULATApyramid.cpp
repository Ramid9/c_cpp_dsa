#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    

    for(int i=1 ; i<=n ; i++){  //for printing rows

        //for printing space in each row
        for(int j=1 ; j <= i-1 ; j++){
            cout<<"  ";
        }
        
        //for printing star in each row 
        for(int j=1 ; j <= 2*n-2*i+1 ; j++){
            cout<<"* ";
        }
        cout<<endl; // to go next line

        
    }
}