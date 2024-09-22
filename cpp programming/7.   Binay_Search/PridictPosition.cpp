#include<iostream>
using namespace std;
int main(){
    int arr[50] , n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i= 0 ; i<n ; i++)
        cin>>arr[i];

    for(int i=n-2 ; i>=0 ; i--){
        bool swapped = 0;
        for(int j=0 ; j<=i ; j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = 1;
            }
        }
        if(swapped==0)
            break;
    }
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    int x;
    cout<<"\n\nEnter the target: ";
    cin>>x;
    if(x < arr[0] ){
        cout<<"\n\nRequired position: "<<0;
        return 0;
    }
    else if(x > arr[n-1]){
        cout<<"\n\nRequired position: "<<n-1;
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
     cout<<"\n\nRequired position for "<<x<<" is: "<<start;
    
    

    
}