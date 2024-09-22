#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int Largest_sum(vector<int>arr){

    int maxi = INT_MIN , n = arr.size();

        int prefix = 0;
        //for{0},{0,1},{0,1,2},{0,1,2,3},...upto n-1
        for(int j=0 ; j<=n-1 ; j++){
            
            prefix += arr[j];
            //stores the maxinum prefix 
            maxi = max(prefix,maxi);
            //no need to add with negative prefix as it will result small sum
            if(prefix <0){
                prefix = 0;
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