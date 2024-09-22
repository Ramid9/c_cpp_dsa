#include<iostream>
#include<limits.h>
using namespace std;
int main(){//sum of diagonal elements of a square matrix
    int r;
    cout<<"Enter number of rows: ";
    cin>>r;
    
    cout<<"Enter elements of the matrix: ";
    int arr[r][r];
    //input the elements 
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<r ; j++){
            cin>>arr[i][j];
        }
    }
    
    //first and second diagonal
    int first=0 , sec=0;

    //sum of first diagonal
    for(int i=0 ; i<r ; i++)
        first += arr[i][i];

    //sum of second diagonal
    for(int i=0,j=r-1 ; i<=r-1,j>=0 ; i++,j--){
        sec += arr[i][j];
    }
    cout<<"First diagonal sum: "<<first<<"\nSecond diagonal sum: "<<sec;

}