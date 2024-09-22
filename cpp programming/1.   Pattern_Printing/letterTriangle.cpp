#include<iostream>
using namespace std;
int main(){
    char ch;
    for(int i=1 ; i<=5 ; i++){
        for(int j=1 ; j <= 5-i ; j++){
            cout<<"  ";
        }
        ch = 'A';
        for(int j=1 ; j <=i ; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}