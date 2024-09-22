#include<iostream>
using namespace std;

void LOWER_TO_UPPER(string &s , int index){

    if(index==s.size())
        return ;

    // if the char is lower
    if(97<=s[index] && s[index]<=122) {
        s[index] -= 32;  //97-32=65
        LOWER_TO_UPPER(s,index+1);
    }
    else
        LOWER_TO_UPPER(s,index+1);
}
int main(){
    
    string s = "jol4tDDgila";
    int index=0 ;
    LOWER_TO_UPPER(s,index);
    cout<<s<<endl;
}