#include<iostream>
using namespace std;
int main(){
    string s , ans;//empty string: ""
    cout<<"Enter IP address: ";
    getline(cin,s);

    int index=0;
    while(index<s.size()){
        if(s[index]=='.')
            ans += "[.]";
        else
            ans += s[index];
        index++;
    }
    cout<<"transformed address: "<<ans;
}