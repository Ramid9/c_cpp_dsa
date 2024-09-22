#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8] = {1,2,3,4,5,4,0,9} ;
    int max = INT_MIN ;
    int Smax = INT_MIN ;
    for(int i=0 ; i<=7 ; i++){
        if(max<arr[i]){
            max = arr[i] ;
        }
    }
    for(int j=0 ; j<=7 ; j++){
        if(max!=arr[j] && Smax<arr[j]){
            Smax = arr[j] ;
        }

    }
    printf("The second max number of the array is %d ",Smax) ;
    
}