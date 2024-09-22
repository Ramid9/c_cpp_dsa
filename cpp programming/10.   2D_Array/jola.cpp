#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int r , c ;
    cout<<"Enter number of rows: ";
    cin>>r;
    cout<<"Enter number of columns: ";
    cin>>c;
    cout<<"Enter elements in increasing order: ";
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
    for(int i=0 ; i<r ; i++){//traverse through each row

        //if target lies between first and last element of row
        if(arr[i][0]<=target && target<=arr[i][c-1]){

            int start=0 , end=c-1 , mid;
            while(start<=end){
                mid=start+(end-start)/2;
                if(target==arr[i][mid]){
                    cout<<"Present.";
                }
                else if(target<arr[i][mid])
                    end=mid-1;
                else
                    start=mid+1;
            }
            cout<<"NOT Present.";
        }
    }
}