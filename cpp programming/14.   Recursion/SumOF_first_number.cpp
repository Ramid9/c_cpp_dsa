#include<iostream> 
using namespace std;
int sum_of_N(int n){ 

    if(n==1)  // breaking condition
        return 1;
    
    return n + sum_of_N(n-1);

}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int sum = sum_of_N(n);
    cout<<sum<<endl;
}