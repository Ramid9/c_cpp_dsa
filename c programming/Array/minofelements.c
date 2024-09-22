#include<stdio.h>
int main(){
    int n ;
    printf("Enter number of elements of array : ") ;
    scanf("%d",&n) ;
    int arr[n] ;
    for(int i=0 ; i<=n-1 ; i++){
        printf("Enter the element no. %d : ",i+1) ;
        scanf("%d",&arr[i]) ;
    }
    int min = arr[0] ;
    for(int j=1 ; j<=n-1 ; j++){
        if(min>arr[j]) min = arr[j] ;
    }
    printf("The minimum number among the %d elements is : %d ",n,min) ;
    return 0;
}