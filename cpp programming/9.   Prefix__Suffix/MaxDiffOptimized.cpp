#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int Largest_Diff(vector<int>arr){

    int maxi = INT_MIN , n = arr.size() , suffix=arr[n-1];
    for(int i=n-2 ; i>=0 ; i--){
        if(arr[i]>suffix)
            suffix = arr[i];
        else{
            maxi = max(maxi,suffix-arr[i]);
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
    int Sum = Largest_Diff(v);
(v);
    cout<<"\nMax difference: "<<Sum<<endl;
}