#include<iostream>
#include<vector>
using namespace std;

void subsequence(string &s,int index , int n, vector<string>&ans, string temp){

    if(index==n){
        ans.push_back(temp);
        return;
    }
    //not included
    subsequence(s,index+1,n,ans,temp);
    //included
    temp.push_back(s[index]);
    subsequence(s,index+1,n,ans,temp);


}
int main(){

    string s="abc";
    string temp;
    vector<string>ans;
    subsequence(s,0,s.size(),ans,temp);
    //prints all the subsuquence
    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i]<<endl;
    }
}