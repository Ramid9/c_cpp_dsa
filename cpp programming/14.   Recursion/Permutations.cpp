#include<iostream>
#include<vector>
using namespace std;

void permu(int arr[], vector<int>temp , vector<vector<int>> &ans , vector<bool> &visited){

    if(visited.size()==temp.size()){
        ans.push_back(temp);
        return;
    }
    
    for( int i=0 ; i<visited.size() ; i++){
        if(visited[i]==0){
            visited[i]=1;
            temp.push_back(arr[i]);
            permu(arr,temp,ans,visited);
            visited[i]=0;
            temp.pop_back();  
        }
    }
}
int main(){
    int arr[]={3,6,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    vector<int>temp;
    vector<vector<int>>ans;
    vector<bool>visited(n,0);
    permu(arr,temp,ans,visited);

    for(int i=0 ; i<ans.size() ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}