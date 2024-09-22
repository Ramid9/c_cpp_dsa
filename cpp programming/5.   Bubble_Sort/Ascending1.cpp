#include<iostream>
using namespace std;
int main(){
    int arr[50] , n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i= 0 ; i<n ; i++)
        cin>>arr[i];

    for(int i=1 ; i<=n-2 ; i++){
        bool swapped = 0;
        for(int j=n-1 ; j>=i ; j--){

            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
                swapped = 1;
            }
            
        
        }
        if(swapped==0)
            break;
    }
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}