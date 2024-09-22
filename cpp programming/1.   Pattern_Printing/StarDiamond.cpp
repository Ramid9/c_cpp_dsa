#include<iostream>
using namespace std;
int main(){
    int n , space;
    cout<<"Enter the number :";
    cin>>n;
    
    
    for(int i=1 ; i<=n ; i++){  //for printing rows

        space = n-i;
        //for printing space in each row
        for(int j=1 ; j <= space ; j++){
            cout<<"  ";
        }
        //for printing star in each row 
        for(int j=1 ; j <= i ; j++){
            cout<<"*   ";
        }
        cout<<endl;
        
    }
    
    
    //for printing bottom half
    for(int i=1 ; i<=n ; i++){
        
        space = i-1;
        //for printing space in each row
        for(int j=1 ; j <= space ; j++){
            cout<<"  ";
        }
        
        //for printing star in each row 
        for(int j=1 ; j <= n-i+1 ; j++){
            cout<<"*   ";
        }

        cout<<endl;
        
    }
}