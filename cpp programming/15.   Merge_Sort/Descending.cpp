#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//merge two divided arrays into one
void merge(int arr[],int start,int mid, int end){

    vector<int>temp(end-start+1);
    //left array
    int left=start;
    //right array
    int right=mid+1;
    //take elements from left and right array and store them in sorted order
    int index=0;
    while(left<=mid && right<=end){

        if(arr[left]>=arr[right]){
            temp[index]=arr[left];
            index++; left++;
        }
        else {
            temp[index]=arr[right];
            index++; right++;
        }
    }
    // for bigger array 
    while(left<=mid){
        temp[index]=arr[left];
        index++; left++;
    }
    while(right<=end){
        temp[index]=arr[right];
        index++; right++;
    }
    // copy from temp to array
    index=0;
    while(start<=end){
        arr[start]=temp[index];
        start++,index++;
    }
}

//divide the array 
void mergesort(int arr[], int start , int end ){
    //breaking condition
    if(start==end)
        return;
    int mid = start + (end-start)/2;
    //left side array
    mergesort(arr,start,mid);
    //right side array
    mergesort(arr,mid+1,end);
    //when the array is divided into single elements , merge them
    merge(arr,start,mid,end);

}
int main(){

    int arr[]={9,8,7,6,5,4,3,2,7,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,n-1);
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}