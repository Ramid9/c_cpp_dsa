#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int Largest_sum(vector<int>arr){
    int maxi = INT_MIN , n = arr.size();
    for(int i=0 ; i<n ; i++){

        int prefix = 0;
        for(int j=i ; j<n ; j++){
            //stores the sum of each sub array
            prefix += arr[j];  
            maxi = max(prefix,maxi);
        }
    }
    return maxi;
}
int main(){     //Largest SUM of contiguous sub arrays
    
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