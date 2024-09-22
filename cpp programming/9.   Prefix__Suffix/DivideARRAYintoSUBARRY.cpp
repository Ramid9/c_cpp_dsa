#include<iostream>
#include<vector>
using namespace std;
//Division of array into two subarray with equal sum.
void Divide_subarray(vector<int>arr){

    //total sum of all elements of array
    int Total_Sum = 0  ;
    int n = arr.size();
    for(int i=0 ; i<n ; i++){
        Total_Sum += arr[i];
    }
    
    int prefix = 0;
    //divide int two subarray
    for(int i=0 ; i<=n-2 ; i++){

        //stores the sum of the left subarray
        prefix += arr[i];
        //stores the sum of the right subarray
        int Right_Sum = Total_Sum - prefix;

        if(prefix == Right_Sum){
            cout<<"Left sub array: ";
            for(int j=0 ; j<=i ; j++){
                cout<<arr[j]<<" ";
            }
            cout<<"Right sub array: ";
            for(int j=i+1 ; j<=n-1 ; j++){
                cout<<arr[j]<<" ";
            }
            
        }
    }
}
int main(){
    
    int  n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the elements: ";
    for(int i= 0 ; i<n ; i++)
    cin>>v[i];
    Divide_subarray(v);
}