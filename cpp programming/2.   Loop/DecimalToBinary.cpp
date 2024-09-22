#include<iostream>
using namespace std;
int main(){
    int n , rem , arr[50] ;
    cout<<"Enter the Decimal number : ";
    cin>>n;
    int temp = n;
    int i = 0;
    // Stores remainders in aa[]
    while(n>0){
        rem = n % 2 ;
        arr[i] = rem ;
        n = n/2;
        i++;
    }

    // Prints the array elements from i-1 to 0
    cout<<"Binary equivalent of "<<temp<<" is : ";
    int j = i-1;
    while(j>=0){
        cout<<arr[j]<<" ";
        j--;
    }
    return 0;
}