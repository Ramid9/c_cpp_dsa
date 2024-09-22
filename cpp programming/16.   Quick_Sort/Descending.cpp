#include<iostream>
using namespace std;

int partition(int arr[],int start,int end){
    int pos=start;
    for(int i=start ; i<=end ; i++){
        if(arr[i]>=arr[end]){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}
void quick_sort(int arr[],int start,int end){

    //breaking condition
    if(start>=end)
        return;
    int pivot= partition(arr,start,end);
    //go to left array
    quick_sort(arr,start,pivot-1);
    //go to right array
    quick_sort(arr,pivot+1,end);

}
int main(){

    int arr[]={9,8,7,6,5,4,3,2,7,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr,0,n-1);
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
