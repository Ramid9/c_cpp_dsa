#include<iostream>
using namespace std;
int main(){ //x+y = target. find x and y
    
    int arr[50] , n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i= 0 ; i<n ; i++)
        cin>>arr[i];
    //bubble sort ascending
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
    
    int target ;
    cout<<"\n\nEnter the target: ";
    cin>>target;
    for(int i=0 ; i<=n-2 ; i++){
        //binary search to find y
        int start=i+1, end=n-1 , mid ;
        while(start<=end){
            mid = start + (end-start)/2;
            //x+y == target
            if(arr[i]+arr[mid]==target){
                cout<<"Two number are: "<<arr[i]<<" and "<<arr[mid];
                return 0;
            }
            else if(arr[i]+arr[mid]<target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        } 
    }
     cout<<"No such numbers are present ";
}