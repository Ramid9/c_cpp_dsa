#include<iostream> 
using namespace std;
int GCD(int n , int m){ 
    if(m==0)
        return n;
    
    return GCD(m , n%m);

}
int main(){
    int n , m;
    cout<<"Enter two numbers: ";
    cin>>n>>m;
    cout<<GCD( n , m)<<endl;
}