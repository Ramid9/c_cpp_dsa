#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    
    vector<int>lps(s.size());
    int pre=0 , suff=1 ;
    while(suff<s.size()){
        if(s[pre]==s[suff]){
            lps[suff] = pre+1;
            suff++ , pre++ ;
        }
        else{
            if(pre==0){
                lps[suff]=0;
                suff++;
            }
            else{
                pre=lps[pre-1];
            }
        }
    }
    cout<<"\nSize of longest prefix-suffix: "<<lps[s.size()-1];
}