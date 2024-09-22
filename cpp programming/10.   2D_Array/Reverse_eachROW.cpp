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
    //new matrix which will store reversed row
    int rev[r][c];
    for(int i=0 ; i<r ; i++){
        int COLindex=c-1;//last column index of each row
        for(int j=0 ; j<c ; j++){
           rev[i][j] = arr[i][COLindex];
           COLindex--;
        }
    }
    cout<<"\nReversed matrix: \n";
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            cout<<rev[i][j]<<" ";
        }
        cout<<endl;
    }
}