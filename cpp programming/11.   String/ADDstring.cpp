#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
string ADD(string num1, string num2){
    int index1 = num1.size()-1 , index2 = num2.size()-1;
    int sum , carry=0;
    string ans;
    while(index2>=0){
        sum = (num1[index1]-'0') + (num2[index2]-'0') + carry;
        carry = sum/10;
        char c = '0'+ sum%10;
        ans += c;
        index1-- , index2--;
    }

    while(index1>=0){
        sum = (num1[index1]-'0') + carry;
        carry = sum/10;
        char c = '0'+ sum%10;
        ans += c;
        index1-- ;
    }
    if(carry)
    ans += '1';
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){      // "23456" + "234" =    "23690"
    string num1 , num2;
    cout<<"Enter num1: ";
    getline(cin,num1);
    cout<<"Enter num2: ";
    getline(cin,num2);
    string ans;
    if(num1.size()<num2.size())
     ans = ADD(num2,num1);
    else
     ans = ADD(num1,num2);
    cout<<ans;
}