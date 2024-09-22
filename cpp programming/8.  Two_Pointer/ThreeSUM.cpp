#include<iostream>
using namespace std;
bool ThreeSum(int arr[],int target, int n){//O(n^3)

    for(int i=0 ; i<=n-3 ; i++){
        for(int j=i+1 ; j<=n-2 ; j++ ){
            for(int k=j+1 ; k<=n-1 ; k++){
                if(arr[i]+arr[j]+arr[k]==target)
                    return 1;
            }
        }
    }
    return 0;
}
int main(){
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