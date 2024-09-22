#include<iostream>
using namespace std;
bool find(int arr[], int target,int index , int n){
    if(target==0)
        return 1;
    if(target<0 || index==n)
        return 0;
    return find(arr,target,index+1,n) || find(arr,target-arr[index],index+1,n);
}
int main(){
    int arr[]={1,2,4,5,6,9};
    int target=12;
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<find(arr,target,0,n);
}