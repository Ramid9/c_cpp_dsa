#include<iostream>
#include<vector>
using namespace std;
int main(){   
    string sentence;
    cout<<"Enter string: ";
    getline(cin,sentence);
    int n= sentence.size();

    //vector to store number of occurances of each small letter
    vector<int>alpha(26,0);
   
    //iterate through all char of sentence
    for(int i=0 ; i<n ; i++){

        //index of letter in alpha(0to25)
        int index=sentence[i]-'a';
        alpha[index] += 1; // one occurence
    }

    //sorting
   int k=0;
   for(int i=0 ; i<26 ; i++){
      while(alpha[i]){
            sentence[k] ='a'+i;
            k++;
            alpha[i]--;
       }
   }

    //printing
    for(int i=0 ; i<n ; i++){
        cout<<sentence[i];
    }
   
  
}