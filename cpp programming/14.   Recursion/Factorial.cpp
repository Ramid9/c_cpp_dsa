#include<iostream> 
using namespace std;
int factorial(int n){ 

    if(n==1||n==0)  // breaking condition
        return 1;
    
    return n*factorial(n-1);

}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int fact=factorial(n);
    cout<<fact<<endl;
}