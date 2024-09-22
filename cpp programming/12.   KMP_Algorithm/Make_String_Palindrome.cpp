#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){ // find minimum number of char to make the string a palindrome
    string s;
    cout<<"Enter the string : ";
    getline(cin,s);
    //reverse the string 
    string rev=s , orig=s;
    int size = s.size();
    reverse(rev.begin(),rev.end());
    //add a speacial char to the end of the original string
    s += '&';
    //add the reverse string to the original string 
    s += rev;
    //now find the LPS of entire string
    int n=s.size();
    vector<int>lps(n,0);
    int pre=0 , suff=1;
    while(suff<n){

        if(s[pre]==s[suff]){
            lps[suff]=pre+1;
            pre++ , suff++;
        }
        else{
            if(pre==0)
                suff++;
            else
                pre=lps[pre-1];

        }
    }
    cout<<"\nMinimum char required: "<<size-lps[n-1];
    string s1;
    for(int i=1,index=size-1 ; i<=size-lps[n-1] ; i++, index--){
        s1 += orig[index];
    }
    cout<<"\nPalindrome: "<<s1+orig;
}