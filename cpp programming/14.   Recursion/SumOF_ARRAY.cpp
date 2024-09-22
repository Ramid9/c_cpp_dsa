#include<iostream> 
using namespace std;
void sumOF(int arr[] ,int index ,int sum){ 

    if(index==-1){
        cout<<sum<<endl;
        return;
    }
    
    sum += arr[index];
    sumOF(arr,index-1 ,sum);

}
int main(){
    int arr[] = {1,2,3,3,6,9};
    
    int sum=0 , index = sizeof(arr)/sizeof(arr[0])-1;
    sumOF(arr , index , sum);
}
