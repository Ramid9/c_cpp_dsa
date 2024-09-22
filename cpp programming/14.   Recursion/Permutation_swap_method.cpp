#include<iostream>
#include<vector>
using namespace std;

void permu(vector<int>&arr,int index,int n, vector<vector<int>> &ans){

    if(index==n){
        ans.push_back(arr);
        return;
    }
    
    for( int i=index ; i<n ; i++){
       swap(arr[index],arr[i]);
       permu(arr,index+1,n,ans);
       swap(arr[index],arr[i]);       
    }
}
int main(){
    vector<int>arr = {3,6,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    vector<vector<int>>ans;
    int index=0;
    permu(arr,index,n,ans);

    for(int i=0 ; i<ans.size() ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}