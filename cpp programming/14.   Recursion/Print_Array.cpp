#include<iostream> 
using namespace std;
void print1(int i, int size, int arr[]){ 

    if(i==size){
        return;
    }
    
    cout<<arr[i]<<endl;
    
    print1(i+1,size,arr);

}
int main(){
    int arr[] = {1,2,3,3,6,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    print1(0,size,arr);
}