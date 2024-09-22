#include<iostream> 
using namespace std;
int Square_Sum(int n){ 

    if(n==1)  // breaking condition
        return 1;
    
    return n*n + Square_Sum(n-1);

}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
   
    cout<<Square_Sum(n)<<endl;
}