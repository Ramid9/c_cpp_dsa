#include<iostream> 
using namespace std;
int minimum(int arr[] ,int index , int n){ 

    if(index==n-1)
        return arr[index];
   
    return min(arr[index],minimum(arr , index+1 ,n));
}
int main(){

    int arr[] = {7,2,3,5,6,9};
    int index=0 ,n=sizeof(arr)/sizeof(arr[0]);
    cout<<minimum(arr , index , n)<<endl;
    
}
