#include<iostream>
#include<vector>
using namespace std;
void FindLPS(vector<int>& lps,string patt){

    int pre=0 , suff=1 ;
    while(suff<patt.size()){
        if(patt[pre]==patt[suff]){
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
}
int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    string patt;
    cout<<"Enter pattern: ";
    getline(cin,patt);

    int n=s.size() , m=patt.size();
    vector<int>lps(patt.size(),0);
    FindLPS(lps,patt) ;

    int first=0 , sec=0 ;
    while(sec<patt.size() && first<s.size()){
        //match
        if(s[first]==patt[sec])
            first++,sec++;
        //not matched
        else{
            if(sec==0)
                first++;
            else
                sec=lps[sec-1];
        }
    }
    //answer exist
    if(sec==patt.size())
        cout<<"\nPattern found of index: "<<first-sec;
    else
        cout<<"\nPattern not found";
}