#include<stdio.h>
int main(){
    int arr[5], sum=0 ;
    for(int i=0 ; i<=4 ; i++){
        printf("Enter the digit number %d : ",i+1) ;
        scanf("%d",&arr[i]) ;
        sum = sum + arr[i] ;
    }
    printf("Sum of the digits of the array is : %d ",sum) ;
    return 0;
}