#include<iostream>
using namespace std;
int main(){
    int n , space , a , temp = 1;
    cout<<"Enter the number :";
    cin>>n;
    
    
    for(int i=1 ; i<=n ; i++){  //for printing rows

        space = n-i;
        //for printing space in each row
        for(int j=1 ; j <= space ; j++){
            cout<<"  ";
        }
        a = 1;
        //for printing star in each row 
        for(int j=1 ; j <= temp ; j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
        temp = temp +2;
        
    }
}