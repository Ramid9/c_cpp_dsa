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
    bool next=0;
    cout<<"\nWave form of Given matrix: \n";
    //need to print the matrix column wise
    for(int i=0 ; i<c ; i++){
        if(next==0){
            //prints up to down
            for(int j=0 ; j<r ; j++){
                cout<<arr[j][i]<<" ";
                next=1;
            }
        }
        else{
            //prints down to up
            for(int j=r-1 ; j>=0 ; j--){
                cout<<arr[j][i]<<" ";
                next=0;
            }
        }
    }
}