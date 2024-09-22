#include<iostream>
#include<vector>
using namespace std;
void findlps(vector<int>& lps,string patt){
    int pre=0 , suff=1;
    while(suff<patt.size()){
        if(patt[pre]==patt[suff]){
            lps[suff]=pre+1;
            pre++,suff++;
        }
        else{
            if(pre==0){
                lps[suff]==0;
                suff++;
            }
            else
                pre=lps[pre-1];
        }
    }

}
bool KMPsearch(string temp, string patt){
    vector<int>lps(patt.size(),0);
    findlps(lps,patt);//find lps first then search pattern
    int first=0 , sec=0;
    while(first<temp.size() && sec<patt.size()){
        if(temp[first]==patt[sec])
            first++, sec++;
        else{
            if(sec=0)
                first++;
            else{
                sec=lps[sec-1];
            }
        }
    }
    if(sec==patt.size())
        return 1;
    else
        return 0;

}
int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    string patt;
    cout<<"Enter patt: ";
    getline(cin,patt);

    string temp=s;
    int repeat=1;
    while(temp.size()<patt.size()){
        temp+=s;
        repeat++;
    }
    //KMP pattern match
    if(KMPsearch(temp,patt)==1){
        cout<<"\nTotal repeatation:"<<repeat;
        return 0;
    }
    //temp+s , KMPsearch
    if(KMPsearch(temp+s,patt)==1){
       cout<<"\nTotal repeatation:"<<repeat+1;
       return 0;
    }
    cout<<"\nPattern not found";
    return 0;
}