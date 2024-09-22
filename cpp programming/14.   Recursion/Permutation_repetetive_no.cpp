#include<iostream>
#include<vector>
using namespace std;
void permut(vector<int>&arr, vector<vector<int>>&ans, int index ){
    
    if(index==arr.size()){
        ans.push_back(arr);
        return;
    }
    // if one number is used one time it can not be used after
    vector<int>used(21,0); // max 21 numbers are used for permutation(-10 to 10)
    for(int i=index ; i<arr.size() ; i++){
        if(used[arr[i]+10]==0){

            swap(arr[index],arr[i]);
            permut(arr,ans,index+1);
            swap(arr[index],arr[i]);
            used[arr[i]+10]=1;

        }
    }
}
int main(){

    vector<int> arr = {1,2,2}; //  3! / 2!
    vector<vector<int>>ans;
    int index=0;
    permut(arr,ans,index);

    for(int i=0 ; i<ans.size() ; i++){
        for(int j=0 ; j<arr.size() ; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}