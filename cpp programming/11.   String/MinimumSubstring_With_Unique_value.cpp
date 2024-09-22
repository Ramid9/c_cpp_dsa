#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    vector<int>count(256,0);
    int first=0 , second=0 , len=s.size() , diff=0;
    //total unique char in the string
    while(first<len){
        if(count[s[first]]==0)
        diff++;
        count[s[first]]=1;
        first++;
    }

    for(int i=0 ; i<256 ; i++)
    count[i]=0;

    first=0;
    while(second<s.size()){
        //diff=0 means , found  a subsring with unique value
        while(diff && second<s.size()){
            if(count[s[second]]==0)
            diff--;

            count[s[second]]++;
            second++;   
        }
        len= min(len,second-first);
        //check if we can decrease the len
        while(diff!=1){

            len= min(len,second-first);
            count[s[first]]--;
            if(count[s[first]]==0)
            diff++;

            first++;
        }
    }
    cout<<"\nMiminum length of substring: "<<len;
}