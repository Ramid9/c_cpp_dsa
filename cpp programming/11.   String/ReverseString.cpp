#include<iostream>
using namespace std;
int main(){
    //string initialization
    string s="Ramid Roy Majhi";
    cout<<s;
    cout<<endl;

    //size of string
    int n= s.size(); // total 15 == 13 letter and 2 spaces
    cout<<n<<endl;
    //another method
    int size=0;
    while(s[size]!='\0'){
        size++;
    }
    cout<<size<<endl;

    //Reverse string
    string s1;
    cout<<"Enter string\n";
    getline(cin,s1);// counts space as a charecter
    int start=0 , end=s1.size()-1;
    while(start<end){
        swap(s1[start],s1[end]);
        start++ , end--;
    }
    cout<<s1<<endl;

    //check palindrom or not
    int start1=0 , end1=s1.size()-1;
    while(start1<end1){
        if(s[start1]!=s[end1]){
            cout<<"Not Palindrome";
            return 0;
        }
    }
     cout<<" Palindrome";
}