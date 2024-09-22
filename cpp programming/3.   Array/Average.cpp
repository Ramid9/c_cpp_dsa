#include<iostream>
using namespace std;
int main(){
    int arr[18] , sum=0 ;
    cout<<"Enter the array elements : ";
    for(int i=0 ; i<18 ; i++){
        cin>>arr[i];
    }
    for(int i=0 ; i<18 ; i++){
        sum += arr[i];
        
    }
    cout<<"Average = "<<sum/18;

}