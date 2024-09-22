#include<iostream>
using namespace std;
bool Linear_search(int arr[],int X, int index, int N ){

    if(index==N)
        return 0;
    if(arr[index]==X)
        return 1;
    
    return Linear_search(arr,X,index+1,N);
    
}

int main(){

    int arr[] = {1,2,3,7,1,4,9,6,3};
    int X=9;
    bool ans =Linear_search(arr,X,0,9);
    cout<<ans<<end;
    
}