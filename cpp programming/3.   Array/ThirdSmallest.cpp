#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[20] , n ;
    cout<<"Enter the array size : ";
    cin>>n;
    cout<<"Enter the array elements : ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    //Find the smallest element
    int small = INT_MAX ;
    for(int i=0 ; i<n ; i++){

       if(arr[i] < small){
            small = arr[i]; 
           
       }
        
    }
    //find the second smallest element
    int Ssmall = INT_MAX ;
    for(int i=0 ; i<n ; i++){
        //skips the smallest 
       if(arr[i] < Ssmall && arr[i] != small){
            Ssmall = arr[i]; 
            
       }
        
    }
    int Tsmall = INT_MAX ;
    for(int i=0 ; i<n ; i++){
        //skips the second smallest 
       if(arr[i] < Tsmall && arr[i] != small && arr[i] != Ssmall){
            Tsmall = arr[i]; 
            
       }
        
    }
    cout<<"Third smallest  element of array  = "<<Tsmall;

}