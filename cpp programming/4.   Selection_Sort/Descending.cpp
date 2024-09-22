#include<iostream>
using namespace std;
int main(){
    int index;
    int arr[] = {9,2,0,5,6,1,7};
    for(int i=0 ; i<7-1 ; i++){
        index = i;
        for(int j=i+1 ; j<7 ; j++){
            if(arr[j] > arr[index]){
            index = j;
            }
        
        }
        swap(arr[i],arr[index]);
    
    }
    for(int i=0 ; i<7 ; i++){
        cout<<arr[i]<<" ";
    }
}