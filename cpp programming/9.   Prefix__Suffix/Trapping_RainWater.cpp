#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int Trapped_Water(vector<int>arr){ //Brute force technique

    int n = arr.size() ;
    int TotalWater=0 ,prefix=arr[0];
    for(int i=1 ; i<=n-2 ; i++){
       
        //to calculate the left maximum building of i
        if(arr[i-1]>prefix)
            prefix=arr[i-1];
        
        int  suffix = arr[n-1] ;
        //to calculate the right maximum building of i
        for(int j=n-2 ; j>=i+1 ; j--){
            if(arr[j]>suffix)
                suffix=arr[j];
        }
        //if right and left maximum both are taller than arr[i], then only it can trap watar
        if(prefix>arr[i] && suffix>arr[i]){
    
            int mini = min(prefix,suffix);
            TotalWater += (mini-arr[i]);
        }
        
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