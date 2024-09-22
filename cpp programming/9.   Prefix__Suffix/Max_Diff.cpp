#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int Largest_sum(vector<int>arr){

    int maxi = INT_MIN , n = arr.size();
    for(int i=0 ; i<=n-2 ; i++){
        //traverse through i+1 to n-1 and find the diff berween arr[i]&arr[j]
        for(int j=i+1 ; j<n ; j++){
            maxi = max(arr[j]-arr[i],maxi);
        }
    }
    return maxi;
}
int main(){     //Largest difference of contiguous sub arrays
    
    int  n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the elements: ";
    for(int i= 0 ; i<n ; i++)
    cin>>v[i];
    int Sum = Largest_sum(v);
    cout<<Sum<<endl;
}