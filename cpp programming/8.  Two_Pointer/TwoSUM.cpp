#include<iostream>
using namespace std;
int main(){ //x+y = target. find x and y
    
    int arr[50] , n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int start= 0 ; start<n ; start++)
        cin>>arr[start];
    //bubble sort ascending
    for(int start=n-2 ; start>=0 ; start--){
        bool swapped = 0;
        for(int j=0 ; j<=start ; j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = 1;
            }
        }
        if(swapped==0)
            break;
    }
    for(int start=0 ; start<n ; start++){
        cout<<arr[start]<<" ";
    }
    
    int target ;
    cout<<"\n\nEnter the target: ";
    cin>>target;
   
        //two pointer
        int start=0, end=n-1  ;
        while(start<end){
           
            //x+y == target
            if(arr[start]+arr[end]==target){
                cout<<"Two number are: "<<arr[start]<<" and "<<arr[end];
                return 0;
            }
            else if(arr[start]+arr[end]<target){
                //since we need big number
                start++;
                //because array is in ascending order
            }
            else{ //arr[start]+arr[end]>target
                 //since we need small number
                end++;
            }
        } 
    
     cout<<"No such numbers are present ";
}