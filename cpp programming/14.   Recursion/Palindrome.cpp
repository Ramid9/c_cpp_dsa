#include<iostream>
using namespace std;
bool check_palin(string s , int start , int end ){
        if(start>=end) // break condition
            return 1;
    // not matched
        if(s[start] != s[end])
            return 0;
    // matched
        else 
            return check_palin(s,start+1,end-1);
}
int main(){
    string s = "jggrj";
    int start=0 , end = s.size()-1;
    cout<<check_palin(s,start,end)<<endl;
}