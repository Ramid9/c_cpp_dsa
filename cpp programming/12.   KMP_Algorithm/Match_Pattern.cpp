#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    string patt;
    cout<<"Enter pattern: ";
    getline(cin,patt);
    int n=s.size() , m=patt.size();

    for(int i=0 ; i<=n-m ; i++){
        int  first=i , sec=0;
        while(sec<m){
            if(s[first]!=patt[sec])
                break;
            else
                first++ , sec++;
        }
        if(sec==m)
        cout<<"\nPattern found at index: "<<first-sec;
    }

}