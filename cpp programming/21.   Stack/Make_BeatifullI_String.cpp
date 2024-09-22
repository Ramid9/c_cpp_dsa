#include<iostream> // delete the adjacent same string           
#include<stack>
using namespace std;
int main(){
   string arr[]={"ab","bc","ca","ca","bc","ba"};
   stack<string>stk;

   for(int i=0 ; i<6 ; i++){
        if(stk.empty()){
            stk.push(arr[i]);
        }
        else{
            if(stk.top()==arr[i])
                stk.pop();
            else
                stk.push(arr[i]);
        }
   }

    
   
    cout<<"Size of the modified array: "<<stk.size()<<endl;
}
