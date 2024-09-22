#include<iostream>
using namespace std;
int main(){
   int  nums[]={3,1};
    for(int i=2-1 ; i>=0 ; i--){
        bool swapped = 0;
        for(int j=0 ; j<=i ; j++){

            if(nums[j]>nums[j+1]){
                //swap(nums[j],nums[j+1]);
                nums[j] = nums[j]+nums[j+1];
                nums[j+1] = nums[j]-nums[j+1];
                nums[j] = nums[j]-nums[j+1];
                swapped = 1;
            }
            
        
        }
        if(swapped==0){
            break;
        }
    }
    for(int i= 0 ; i<2 ; i++){
        cout<<nums[i]<<" ";
    }
}