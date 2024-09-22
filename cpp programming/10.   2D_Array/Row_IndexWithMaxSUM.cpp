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
    int sum, MaxSum = INT_MIN , index=-1;
    for(int i=0 ; i<r ; i++){ //creats each row 
        sum=0;
        for(int j=0 ; j<c ; j++){//travers through all elements of each row 
           sum += arr[i][j];// and add them all
        }
        if(sum>MaxSum){ 
            MaxSum=sum;
            index=i;
        }       
    }
    cout<<"maximum sum: "<<MaxSum<<"\nindex:"<<index;

}