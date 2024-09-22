// calulate number of combinations
#include<iostream>
#include<vector>
using namespace std;
void combinations_no(int n,int left,int right,string &temp,vector<string>&ans){

    if(left+right==2*n){
        ans.push_back(temp);
        return;
    }
    if(left<n){
        temp.push_back('(');
        combinations_no(n,left+1,right,temp,ans);
        temp.pop_back();
    }
    if(right<left){
        temp.push_back(')');
        combinations_no(n,left,right+1,temp,ans);
        temp.pop_back();
    }
}
int main(){
    int n;
    cout<<"Enter number of parentheses:";
    cin>>n;
    string temp;
    vector<string>ans;
    combinations_no(n,0,0,temp,ans);
    for(int i=0 ; i<ans.size() ; i++){
        cout<<i+1<<ans[i]<<endl;
    }
}
