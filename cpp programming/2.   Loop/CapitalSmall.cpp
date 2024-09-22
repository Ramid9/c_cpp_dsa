#include<iostream>
using namespace std;
int main(){
    char cap = 'A' , smal = 'a';
    int i = 1;
    while(i<=26){
        cout<<cap<<"    "<<smal<<endl;

        i++;
        cap++;
        smal++;
    }
    return 0;
}