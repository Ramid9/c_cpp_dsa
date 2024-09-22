#include<iostream>
#include<stack>
using namespace std;
int main(){
   char arr[] = {'r','a','m','i','d'};

   stack<char>st;
   for(int i=0 ; i<5 ; i++){
        st.push(arr[i]);

   }
   int i= 0;
   while(!st.empty()){
        arr[i] = st.top();
        st.pop();
        i++;
   }

   for(int i=0 ; i<5 ; i++){
    cout<<arr[i]<<"  ";
   }
}