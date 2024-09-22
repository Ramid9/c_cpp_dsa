#include<iostream> // delete the adjacent negative and non negative number 
#include<vector>             
#include<stack>
using namespace std;
int main(){
   int arr[]={1,5,-5,9,8,4,0,-1};
   stack<int>stk;

   for(int i=0 ; i<8 ; i++){
        if(stk.empty()){
            stk.push(arr[i]);
        }
        else if(arr[i]>=0){

            if(stk.top()>=0)
                stk.push(arr[i]);
            else
                stk.pop();
        }
        else{ // arr[i] < 0

            if(stk.top()<0)
                stk.push(arr[i]);
            else
                stk.pop();
        }
   }

    vector<int>ans(stk.size());
   int i=ans.size()-1;
   while(!stk.empty()){

        ans[i] = stk.top();
        stk.pop();
        i--;
   }

   for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i]<<"  ";
   }

}