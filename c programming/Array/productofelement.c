#include<stdio.h>
int main(){
    int n, prod=1 ;
    printf("Enter the size of the array : ") ;
    scanf("%d",&n) ;
    int arr[n] ;
    for(int i=0 ; i<=n-1 ; i++){
       
        printf("Enter the element of number %d : ",i+1) ;
        scanf("%d",&arr[i]) ;
        prod = prod * arr[i] ;
    }
    printf("The product of the %d elements of array is %d",n,prod) ;
}