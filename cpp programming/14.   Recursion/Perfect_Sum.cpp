#include<iostream> // find number of combination whose sum is target
using namespace std;
int find(int arr[], int target,int index , int n){
    if(index==n) // REACH TO THE END FOR '0' numbers in array
        return target==0; // RETURN 1 IF TRUE ELSE RETURN 0;

    return find(arr,target,index+1,n) + find(arr,target-arr[index],index+1,n);
}
int main(){
    int arr[]={0,1};
    int target=1;
    int number = 0;
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<find(arr,target,0,n);
}