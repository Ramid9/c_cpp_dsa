#include<iostream>
#include<vector>
using namespace std;

void subsequence(int arr[],int index , int n,int sum , vector<int>&ans){

    if(index==n){
        ans.push_back(sum);
        return;
    }
    //not included
    subsequence(arr,index+1,n,sum,ans);
    //included
    subsequence(arr,index+1,n,sum+arr[index],ans);


}
int main(){

    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>ans;
    int sum=0;
    subsequence(arr,0,n,sum,ans);
    for(int i=0 ; i<ans.size() ; i++)
        cout<<ans[i]<<endl;
    
}