#include<iostream>
using namespace std;

bool Binary(int arr[],int x,int start,int end){

    if(start>end)
        return 0;

    int mid= (start+end)/2;
    if(arr[mid]==x)
        return 1;
    else if(arr[mid]<x)
        Binary(arr,x,mid+1,end);
    else 
        Binary(arr,x,start,mid-1);
    
    
}
int main(){
    int arr[] = {1,2,3,3,6,9};
    int x = 6;
    int start=0, end = sizeof(arr)/sizeof(arr[0])-1;
    cout<<Binary(arr,x,start,end)<<endl;
}