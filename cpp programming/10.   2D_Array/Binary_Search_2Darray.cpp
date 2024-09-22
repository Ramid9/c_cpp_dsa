#include<iostream>
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
    int target;
    cout<<"Enter target: ";
    cin>>target;
    int start=0 , end=(r*c-1) , mid;
    while(start<=end){
        mid=start+(end-start);//linear index 
       int rowindex=mid/c;//matrix row index
       int colindex=mid%c;//matrix col index
        if(arr[rowindex][colindex]==target){
            cout<<"Present";
            return 0;
        }
        else if(arr[rowindex][colindex]>target)
            end=mid-1;
        else
            start=mid+1;
    }
    cout<<"Not present";

}