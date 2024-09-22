#include<iostream>
using namespace std;

int count_vowel(string s , int index ){
    if(index==s.size())

        return 0;

    if(s[index]=='a' ||s[index]=='e' ||s[index]=='i' ||s[index]=='o' ||s[index]=='u')

        return 1 + count_vowel(s,index+1);

    else 
        return count_vowel(s,index+1);
}

 main(){
    string s = "jg2reeogaarjpo";
    int index = 0 , count = 0;
    cout<<count_vowel(s,index)<<endl;
}