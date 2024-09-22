#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5}, brr[5];
    for(int i=0 ; i<=4 ; i++){
        brr[i] = arr[5-i-1] ;
    }
    printf("The reversed array is : ") ;
    for(int j=0 ; j<=4 ; j++){
        printf("%d ",brr[j]) ;
    }
    return 0;
}