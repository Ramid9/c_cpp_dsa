#include<iostream>
using namespace std;
int main(){ //x-y = target. find x and y
    
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
    if(target<0)
    target *= -1;
        //two pointer
        int start=0, end=1  ;
        while(end<=n-1){
            
            //x-y == target
            if(arr[end]-arr[start]==target){
                cout<<"Two numbers are: "<<arr[end]<<" and "<<arr[start];
                return 0;
            }
            //
            else if(arr[end]-arr[start]<target){
                //to increase difference
                end++;
                //because array is in ascending order
            }
            //arr[end]-arr[start]>target
            else{
                //to decrease the difference
                start++;
           
            }
            //numbers must be different
            if(start==end){
                end++;
            }
        } 
    
     cout<<"No such numbers are present ";
}