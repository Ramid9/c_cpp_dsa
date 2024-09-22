#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8] = {1,10,3,4,5,4,0,9} ;
    int max = INT_MIN ;
    int Smax = INT_MIN ;
    for(int i=0 ; i<=7 ; i++){
        if(max<arr[i]){
            Smax = max ;
            max = arr[i] ;
        }
        else if(Smax<arr[i] && max!=arr[i]){
            Smax = arr[i] ;
        }
    }
    
    printf("The second max number of the array is %d ",Smax) ;
    
} 