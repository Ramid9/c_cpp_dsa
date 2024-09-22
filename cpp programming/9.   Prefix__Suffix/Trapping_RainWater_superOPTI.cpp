#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int Trapped_Water(vector<int>arr){ // Super Optimized technique, time--- O(n) space-->O(1)

    int n = arr.size() ;
    //find maximum building
    int maxBuild=arr[0], index;
    for(int i=1 ; i<n ; i++){
        if(maxBuild<arr[i]){
            maxBuild=arr[i];
            index=i;
        }
    }
    int leftmax=0 , rightmax=0 , TotalWater=0;
    //water in left part of max building
    for(int i=0 ; i<index ; i++){
        if(leftmax>arr[i])
            TotalWater += leftmax-arr[i];
        else
            leftmax=arr[i];
    }
    //water in right part of max building
    for(int i=n-1 ; i>index ; i--){
        if(rightmax>arr[i])
            TotalWater += rightmax-arr[i];
        else
            rightmax=arr[i];
    }
    return TotalWater;
}
int main(){     //Total amount of water trapped in between the buildings 
    
    int  n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the elements: ";
    for(int i= 0 ; i<n ; i++)
    cin>>v[i];
    int Total = Trapped_Water(v);

    cout<<"\n:Total trapped water: "<<Total<<endl<<" unit\n";
}