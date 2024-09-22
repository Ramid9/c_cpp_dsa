#include<iostream>
#include<vector>
using namespace std;
int main(){   
    string sentence;
    cout<<"Enter string: ";
    getline(cin,sentence);
    int n= sentence.size();
    vector<string>word(10);
    string temp;
    int count=0;
    for(int i=0 ; i<n ; i++){
        
        if(sentence[i]==' '){
            int pos = temp[temp.size()-1];
            temp.pop_back(); // to delete the number
            word[pos]=temp;
            temp.clear();
            count++;
        }
        else
            temp += sentence[i];
    }
    //for the last word 
    int pos = temp[temp.size()-1];
    temp.pop_back(); // to delete the number
    word[pos]=temp;
    temp.clear();
    count++;
    //storing the words in arranged form in temp
    for(int i=1 ; i<=count ; i++){
        temp += word[i];
        temp += ' ';

    }
    temp.pop_back();//for last word no space is required
    cout<<temp;
}