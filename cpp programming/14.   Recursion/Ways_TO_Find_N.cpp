#include<iostream>  // one element can be used for multiple time
using namespace std; 
int find(int arr[], int target , int n){

    if(target==0)
        return 1;
    if(target<0 )
        return 0;
    
    int ans=0;
    for(int i=0 ; i<n ; i++){
       ans += find(arr,target-arr[i],n);
    }
    return ans;
    
}                                                               
int main(){
    int arr[]={1,5,6}; //(i) 2,2,2 (ii) 3,3  (iii) 2,4
    int target=7;     // total 3 combinations possible for 6
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<find(arr,target,n);
}