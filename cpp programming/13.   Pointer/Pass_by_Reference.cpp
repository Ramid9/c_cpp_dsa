#include<iostream>
#include<vector>
using namespace std;
void incrV(vector<int> &v){//original v
    for(int i=0 ; i<5 ; i++)
        v[i]++;
} 
void incr(string &s){ // original s
    s+=" roy majhi";
}
void swapping(int &a, int &b){ //original a and b , no copy
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    //variable
    int a=10;
    int b=20;
    swapping(a,b);
    cout<<a<<endl<<b;

    //string 
    string s="ramid";
    incr(s);
    cout<<endl<<s<<endl;

    //vector
    vector<int>v(5,0);
    incrV(v);
    for(int i=0;i<5;i++)
        cout<<v[i]<<" ";
}