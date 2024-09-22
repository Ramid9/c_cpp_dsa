#include<iostream> // delete the adjacent negative and non negative number 
#include<vector>             
#include<stack>
using namespace std;
int main(){
   string paren = ")()";
   stack<char>stk;
    int count = 0;
   for(int i=0 ; i<paren.length() ; i++){
        
        if(paren[i]=='(')
            stk.push(paren[i]);
        else{
            if(stk.empty())
                count++;
            else
                stk.pop();
            
        }
   }

    cout<<"Minimum add to make parenthesis valid = "<<stk.size()+count;

}