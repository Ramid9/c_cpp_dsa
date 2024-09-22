#include<iostream> 
using namespace std;
int main(){

   string paren = "((()))";
   
    int left= 0;
   for(int i=0 ; i<paren.size() ; i++){
        
        if(paren[i]=='(')
            left++;

        else{
            if(left==0)
                cout<<"Invalid";
            else
                left--;
        }
   }

    if(left==0)
        cout<<"Valid ";
    else
        cout<<"Invalid";

}