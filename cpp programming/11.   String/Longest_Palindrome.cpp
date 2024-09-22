#include<iostream>
#include<vector>
using namespace std;
int main(){   
    string sentence;
    cout<<"Enter string: ";
    getline(cin,sentence);
    int n= sentence.size();

    vector<int>lower(26,0);
    vector<int>upper(26,0);
    // stores the frequency of lower case and upper case
    for(int i=0 ; i<n ; i++){
        //lower case
        if(sentence[i]>='a')
            lower[sentence[i]-'a']++;
        //upper case
        else
            upper[sentence[i]-'A']++;
    }
    int count=0;
    bool odd=0;
    //lower
    for(int i=0 ; i<26 ; i++){
        if(lower[i]%2==0)  // even 
            count += lower[i];
        else{ // odd
            count += lower[i]-1;
            odd=1;
        }
    }
    //upper
    for(int i=0 ; i<26 ; i++){
        if(upper[i]%2==0)  // even 
            count += upper[i];
        else{ // odd
            count += upper[i]-1;
            odd=1;
        }
    }
    cout<<"Largedt palindrome size: "<<count+1;

     
}