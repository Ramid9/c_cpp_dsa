#include<iostream>
using namespace std;
int main(){
    int n , space;
    cout<<"Enter the number :";
    cin>>n;
    
    space = 0;
    for(int i=1 ; i<=n ; i++){  //for printing rows
        //for printing star in each row 
        for(int j=1 ; j <= (2*n-space)/2 ; j++){
            cout<<"* ";
        }
        //for printing space in each row
        for(int j=1 ; j <= space ; j++){
            cout<<"  ";
        }
        
        //for printing star in each row 
        for(int j=1 ; j <= (2*n-space)/2 ; j++){
            cout<<"* ";
        }
    

        
        
        cout<<endl; // to go next line
        space = space + 2;
        
    }
    
    space = 2*n-2;
    //for printing bottom half
    for(int i=1 ; i<=n ; i++){
        
            //for printing star in each row 
        for(int j=1 ; j <= (2*n-space)/2 ; j++){
            cout<<"* ";
        }
        //for printing space in each row
        for(int j=1 ; j <= space ; j++){
            cout<<"  ";
        }
        
        //for printing star in each row 
        for(int j=1 ; j <= (2*n-space)/2 ; j++){
            cout<<"* ";
        }

        cout<<endl;
        space = space - 2;

        
    }
}