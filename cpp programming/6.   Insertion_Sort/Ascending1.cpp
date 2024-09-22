#include<iostream>
using namespace std;
int main(){
    int arr[50] , n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i= 0 ; i<n ; i++)
        cin>>arr[i];

    for(int i=n-2 ; i>=0 ; i--){
        
        for(int j=i ; j<=n-2 ; j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                
            }
            else
                break;
            
            
        
        }
        
    }
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}