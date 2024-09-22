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

    int k , count = 1 , ans;
    cout<<"\n\nEnter the number: ";
    cin>>k;
    
    for( int i=1 ; count<=k ; i++){
    //Binary search
        int start = 0 , end = n-1 , mid;
        while(start<=end){

            mid = start + (end - start)/2;
            if(arr[mid]==i)
                 break;
            else if(arr[mid]>i){
               end = mid-1;
            
            }
            else{
                start = mid+1; 
                   
            }        
        }
        if(start>end){
           count++;
           ans = i; 
        }
        
    }
    cout<<k<<"-th missing positive number: "<<ans<<"\n\n";
    return 0;
}