#include<iostream>
using namespace std;
int main(){
    int  n , num;
    cout<<"Enter the array size : ";
    cin>>n;
    int arr[50];
    cout<<"Enter the array elements : ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<"Enter the number to find : ";
    cin>>num;
    int flag = 0;
    for(int i=0 ; i<n ; i++){
        if(num == arr[i]){
            cout<<"Index : "<<i<<endl;
            flag = 1;
        }
         
    }
    if(flag == 0)
        cout<<"Not found in the array";

   

}