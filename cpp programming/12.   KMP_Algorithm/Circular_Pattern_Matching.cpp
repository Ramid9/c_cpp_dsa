#include<iostream>
#include<vector>
using namespace std;
void FindLPS(vector<int>& lps,string patt){
    int pre=0 , suff=1;
    while(suff<patt.size()){
        if(patt[pre]==patt[suff]){
            lps[suff]=pre+1;
            pre++,suff++;
        }
        else{
            if(pre==0){
                lps[suff]=0;
                suff++;
            }
            else
                pre=lps[pre-1];
        }
    }
}
int main(){
    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    string patt;
    cout<<"Enter patt : ";
    getline(cin,patt);
    string orig = s;

    //add the same string to the end
    s += orig;
    //find the lps of pattern string
    int n = s.size() , m=patt.size();
    vector<int>lps(m,0);
    FindLPS(lps,patt);
    
    int first=0 , sec=0;
    while(first<n && sec<m){

        if(s[first]==patt[sec])
            first++ , sec++;
        else{
            if(sec==0)
                first++;
            else
                sec=lps[sec-1];

        }
    }
    //all char of pattern matched
    if(sec==m)
        cout<<"\nPattern found in index: "<<first-sec;
    else
         cout<<"\nPattern not found";
}