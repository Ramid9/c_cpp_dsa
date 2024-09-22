#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int r , c ;
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
    int trans[c][r];//transpose
    for(int i=0 ; i<c ; i++){
        for(int j=0 ; j<r ; j++){
            trans[i][j]=arr[j][i];
        }
    }
    cout<<"\nTranspose matrix: \n";
    for(int i=0 ; i<c ; i++){
        for(int j=0 ; j<r ; j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
}