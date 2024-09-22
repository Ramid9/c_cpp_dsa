#include<iostream>  // one element can be used for multiple time
using namespace std; 
int find(int arr[], int target,int index , int n){
    if(target==0)
        return 1;
    if(target<0 || index==n)
        return 0;
    return find(arr,target,index+1,n) + find(arr,target-arr[index],index,n);
}                                                                 //change here
int main(){
    int arr[]={2,3,4}; //(i) 2,2,2 (ii) 3,3  (iii) 2,4
    int target=6;     // total 3 combinations possible for 6
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<find(arr,target,0,n);
}