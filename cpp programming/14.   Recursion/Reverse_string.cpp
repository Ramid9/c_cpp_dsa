#include<iostream>
using namespace std;

string revers(string s , int start , int end ){

    if(start>=end)
        return s;

   swap(s[start],s[end]) ;
   return revers(s,start+1,end-1);
}

int main(){
    
    string s = "jolagila";
    int start=0 , end = s.size()-1;
    cout<<revers(s,start,end)<<endl;
}