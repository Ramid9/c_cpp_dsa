#include<iostream> // delete the adjacent negative and non negative number 
#include<vector>             
#include<stack>
using namespace std;
int main(){
   string paren = "((())";
   stack<char>stk;

   for(int i=0 ; i<paren.length() ; i++){
        if(stk.empty()){
            stk.push(paren[i]);
        }
        else if(paren[i]=='('){

            if(stk.top()==')')
                stk.pop();
            else
                stk.push(paren[i]);
        }
        else{
            if(stk.top()=='(')
                stk.pop();
            else
                stk.push(paren[i]);
        }
   }

    if(stk.size()==0)
        cout<<"Valid ";
    else
        cout<<"Invalid";

}