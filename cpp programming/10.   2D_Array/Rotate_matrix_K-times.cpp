#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of square matrix: ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter elements of matrix: ";
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Entered matrix: \n";
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int k;
    cout<<"Enter number of rotation: ";
    cin>>k;
    
    k = k%4; //4 times rotation means 0 rotation
    while(k){
        //transpose
        for(int i=0 ; i<=n-2 ; i++){
            for(int j=i+1 ; j<n ; j++){
                swap(arr[i][j],arr[j][i]);
            }
        }
        //reverse each row
        for(int i=0 ; i<n ; i++){
            int start=0 , end=n-1 ;
            while(start<end){
                swap(arr[i][start],arr[i][end]);
                start++ , end--;
            }

        }
        k--;
    }
    cout<<"\nmatrix after rotation: \n";
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}