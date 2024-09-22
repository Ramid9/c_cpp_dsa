#include<iostream>
using namespace std;
int main(){
    int arr[50] , n;
    cout<<"\n\nEnter the size of the array: ";
    cin>>n;
    cout<<"\n\nEnter the elements: ";
    //sorting
    for(int i= 0 ; i<n ; i++)
        cin>>arr[i];

    for(int i=1 ; i<=n-1 ; i++){
        
        for(int j=i ; j>0 ; j--){

            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
                
            }
            else
                break;
        }    
    }
    //sorted array
    cout<<"\n\nSorted array is: ";
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    int x;
    cout<<"\n\nEnter the number: ";
    cin>>x;
    if(x < arr[0] || x > arr[n-1]){
        cout<<"\n\nNot present in the array.";
        return 0;
    }
    int start = 0 , end = n-1 , mid;
   
   
    //Binary search
    while(start<=end){

        mid = (start + end)/2 ;
        

        if(arr[mid]==x){

            cout<<"\n\n"<<x<<" is present on "<<mid<<"th index.";
            return 0;
            
        }
        else if(arr[mid]<x){

            start = mid+1;
        }
        else{ 
            end = mid-1;  //arr[i]>x
        }
        
       
        
    }
    if(start>end){
         cout<<"\n\n"<<x<<" is not present in the array.";   
    }
    
    

    
}