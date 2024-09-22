#include<iostream>
using namespace std;
int main(){ //x-y = target. find x and y
    
    int arr[50] , n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i= 0 ; i<n ; i++)
    cin>>arr[i];
    for(int i=1 ; i<=n ; i++){
        int index=0;
        int temp=i;
        cout<<"Size "<<i<<":  ";
        for(int j=0 ; j<= n-i ; i++){
            cout<<"|";
            for(int k=0 ; k<=i-1 ; k++){
                cout<<arr[index];
                index++;
            }
            cout<<"|";
            index = index-temp+1;

        }
        cout<<endl;
    }
}