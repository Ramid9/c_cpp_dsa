#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[50] , n;
    cout<<"\n\nEnter the size of the mountain array: ";
    cin>>n;
    cout<<"\n\nEnter the elements: ";
    //sorting
    for(int i= 0 ; i<n ; i++)
        cin>>arr[i];

    int start=0 , end=n-1 , mid , index;
    while(start<=end){

        mid = end + (start-end)/2;
        
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){

            cout<<"\n\n"<<"Maximum number: "<<arr[mid]<<"\nIndex: "<<mid;
            return 0;
            
        }
        else if(arr[mid]>arr[mid-1]){
            start = mid+1;
        }
        else{ 
            end = mid-1;  //arr[i]>x
        }
    }    
}