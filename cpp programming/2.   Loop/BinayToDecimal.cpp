#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int  rem , arr[40] , sum = 0 ;
    long long int n;
    cout<<"Enter the Binary number : ";
    cin>>n;
    long long int temp = n;
    int i = 0;
    // Stores remainders in aa[]
    while(n>0){
        rem = n % 10 ;
        arr[i] = rem * pow(2,i);
        sum += arr[i];
        n = n/10;
        i++;
    }

    // Prints the array elements from i-1 to 0
    cout<<"Decimal equivalent of "<<temp<<" is : "<<sum;
    
    return 0;

}