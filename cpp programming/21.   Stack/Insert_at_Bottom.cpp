#include<iostream>
#include<stack>
using namespace std;
int main(){
    int insert = 6;
   stack<int>st;
   st.push(3);
   st.push(4);
   st.push(9);
    /*st
      9
      4
      3
    */
   stack<int>temp;                 
   while(!st.empty()){
        temp.push(st.top());
        st.pop();
   }
    /*st temp  
         3
         4
         9
    */
   st.push(insert);
    /* st
        6
    */
   while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
   }
   /*st temp
    9
    4
    3
    6
   */
}