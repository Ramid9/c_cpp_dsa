#include<iostream>
using namespace std;
bool ThreeSum(int arr[],int target, int n){//O(n^2)
    //sort array
    for(int i=n-2 ; i>=0 ; i--){
        int swapped=0;
        for(int j=0 ; i<=i ; i++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=1;
            }        
        }
        if(swapped==0)
            break;
    }
    for(int k=0 ; k<=n-4 ; k++){//for first number a
    for(int i=k+1 ; i<=n-3 ; i++){//for second number x
        //ans=(x+y+z)-x = y+z
        int ans = target-arr[i];
        //y+z=ans ,,,find y and z ,,,similar to two sum problem
        int start=i+1 , end=n-1;
        while(start<end){
            if(arr[start]+arr[end]==ans)
                return true;
            else if(arr[start]+arr[end]>ans)
                end--;
            else
                start++;
        }
    }
    }
    return false;
}
int main(){ //a+x+y+z==target
    int n , arr[50] , target;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0 ;i<n ; i++){
        cin>>arr[i];
    }
    cout<<"Enter the target: ";
    cin>>target;
    bool _3sum = ThreeSum(arr,target,n);
    cout<<_3sum;
    return 0;
}