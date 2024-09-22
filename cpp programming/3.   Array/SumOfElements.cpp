#include<iostream>
using namespace std;
int main(){
    int arr[20] , sum=0 ;
    cout<<"Enter the array elements : ";
    for(int i=0 ; i<20 ; i++){
        cin>>arr[i];
    }
    for(int i=0 ; i<20 ; i++){
        sum += arr[i];
        
    }
    cout<<"Sum = "<<sum;

}