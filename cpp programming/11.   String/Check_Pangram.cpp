#include<iostream>
#include<vector>
using namespace std;
int main(){   // find whether all lower case letters are present in a stirng or not
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
   
   for(int i=0 ; i<25 ; i++){
        // zero occurance 
        if(alpha[i]==0){
            cout<<"All letters not present in the sentence";
            return 0;
        }
   }
   cout<<"All letters present in the sentence";
  
}