#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int i = 1;
    while(i*i <= n){
        if(i*i == n){
            cout<<"Square root of "<<n<<" is : "<<i;
            return 0;
        }
        i++;
    }
    cout<<"Square root of "<<n<<" is : "<<i-1;
    return 0;
}