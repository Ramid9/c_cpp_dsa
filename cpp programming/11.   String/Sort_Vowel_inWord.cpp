#include<iostream>
#include<vector>
using namespace std;
int main(){   // leacode --> laecedo
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    int n= s.size();
    
    //extract all vowels from the word
    vector<int>lower(26,0);
    vector<int>upper(26,0);
    for(int i=0 ; i<n ; i++){
        //lower
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            lower[s[i]-'a']++;
            s[i]='#';
        }
        //upper
        else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            upper[s[i]-'A']++;
            s[i]='#';
        }
    }

    string vowel;
    //sort upper vowels and store in 'vowel'
    for(int i=0 ; i<26 ; i++){
        char c= 'A' + i; // upper vowel to store
        while(upper[i]){ // how many times to be stored in 'vowel'
            vowel += c;
            upper[i]--;
        }
    }
    //sort lower vowels and store in 'vowel'
    for(int i=0 ; i<26 ; i++){
        char c= 'a' + i; // lower vowel to store
        while(lower[i]){ // how many times to be stored in 'vowel'
            vowel += c;
            lower[i]--;
        }
    }

    //transfer all vowels in 'vowel' to 's'(where s[i]=='#')
    int first=0 , sec =0 ; // first point 's' , sec points 'vowel'
    while(sec<vowel.size()){
        if(s[first]=='#'){
            s[first]=vowel[sec];
            sec++;
        }
        first++;
    }
    cout<<s;
}