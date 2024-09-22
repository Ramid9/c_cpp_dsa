#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int Trapped_Water(vector<int>arr){ //Optimized technique time--- O(n) space-->O(n)

    int n = arr.size() ;
    //right maximum building of each building 
    vector<int>right_max(n);
    //left maximum building of each building 
    vector<int>left_max(n);
    //right maximum of last building 0 
    right_max[n-1]=0;
    for(int i=n-2 ; i>=0 ; i--)
        right_max[i] = max(right_max[i+1],arr[i+1]);
    
    //and left max of first building 0
    left_max[0]=0;
    for(int i=1 ; i<=n-1 ; i++)
        left_max[i] = max(left_max[i-1],arr[i-1]);

    int TotalWater=0;
    for(int i=0 ; i<n ; i++){
        int minHight = min(right_max[i],left_max[i]);
        
        if(minHight-arr[i]>=0)
            TotalWater+= minHight-arr[i];
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