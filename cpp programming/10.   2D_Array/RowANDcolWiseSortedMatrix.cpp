#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int r , c ;
    cout<<"Enter number of rows: ";
    cin>>r;
    cout<<"Enter number of columns: ";
    cin>>c;
    cout<<"Enter elements of the row and column wise sor ted matrix: ";
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
    int target;
    cout<<"Enter target:";
    cin>>target;
    int left = c-1 , down = 0 ;
    while(left>=0 && down<r){
        if(arr[down][left]==target){
            cout<<"present";
            return 0;
        }
        else if(arr[down][left]>target)
            left--;
        else
            down++;
    }
    cout<<"not present";

}