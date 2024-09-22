#include<iostream>
using namespace std;
int main(){
    char arr[26] ;
    char ch = 'a';
    for(int i=0 ; i<26 ; i++){
        arr[i] = ch;
        ch++;
    }
    for(int i=0 ; i<26 ; i++){
       cout<<arr[i]<<endl;
        
    }
   
}