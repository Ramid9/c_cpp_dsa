#include<iostream>
using namespace std;
int main(){
    int n , space;
    cout<<"Enter the number :";
    cin>>n;
    
    
    for(int i=1 ; i<=n ; i++){  //for printing rows
        //for printing star in each row 
        for(int j=1 ; j <= i ; j++){
            cout<<"* ";
        }
        space = 2*n - 2*i;
        //for printing space in each row
        for(int j=1 ; j <= space ; j++){
            cout<<"  ";
        }
        
        //for printing star in each row 
        for(int j=1 ; j <= i ; j++){
            cout<<"* ";
        }
        cout<<endl; // to go next line
    }
    
    
    //for printing bottom half
    for(int i=1 ; i<=n-1 ; i++){
        
            //for printing star in each row 
        for(int j=1 ; j <= n-i ; j++){
            cout<<"* ";
        }
        space = 2*i;
        //for printing space in each row
        for(int j=1 ; j <= space ; j++){
            cout<<"  ";
        }
        
        //for printing star in each row 
        for(int j=1 ; j <= n-i ; j++){
            cout<<"* ";
        }

        cout<<endl;
        
    }
}