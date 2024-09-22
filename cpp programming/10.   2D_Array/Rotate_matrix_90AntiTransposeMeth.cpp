#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int r , c ; //r==c for rotation
    cout<<"Enter number of rows: ";
    cin>>r;
    cout<<"Enter number of columns: ";
    cin>>c;
    cout<<"Enter elements of the matrix: ";
    int arr[r][c];
    //input the elements 
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\nGiven matrix: \n";
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //transpose
    for(int i=0 ; i<=r-2 ; i++){
        for(int j=i+1 ; j<c ; j++){
            swap(arr[j][i],arr[i][j]);
        }
    }
    //reverse each column
    for(int j=0 ; j<r ; j++){
        int start=0 , end=c-1;
        while(start<end){
            swap(arr[start][j],arr[end][j]);
            start++ , end--;
        }
    }
    //print 
    cout<<"90 degree anti clockwise: \n";
    for(int i=0 ; i<c ; i++){
        for(int j=0 ; j<r ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}