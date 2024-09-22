#include<iostream>
using namespace std;
int main(){
    int n , space , temp = 1;
    char ch;
    cout<<"Enter the number :";
    cin>>n;
    
    
    for(int i=1 ; i<=n ; i++){  //for printing rows

        space = n-i;
        //for printing space in each row
        for(int j=1 ; j <= space ; j++){
            cout<<"  ";
        }
        ch = 'A';
        //for printing star in each row 
        for(int j=1 ; j <= i ; j++){
            cout<<ch<<" ";
            ch++;
        }
        ch--;
         //for printing star in each row 
        for(int j = 1 ; j <= i-1 ; j++){
            ch--;
            cout<<ch<<" ";
             
        }
        cout<<endl;
        temp = temp +2;
        
    }
}