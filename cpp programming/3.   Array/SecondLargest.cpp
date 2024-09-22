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
    //Find the largest element
    int larg = INT_MIN ;
    for(int i=0 ; i<n ; i++){

       if(arr[i] > larg){
            larg = arr[i]; 
           
       }
        
    }
    //find the second largest element
    int Slarg = INT_MIN ;
    for(int i=0 ; i<n ; i++){
        //skips the largest 
       if(arr[i] > Slarg && arr[i] != larg){
            Slarg = arr[i]; 
            
       }
        
    }
    cout<<"Second largest element of array  = "<<Slarg;

}