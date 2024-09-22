#include<stdio.h>
int multi(int i, int arr[]){
    arr[i] = 2 * arr[i] ;
    return arr[i];
}
int incre(int i, int arr[]){
    arr[i] = 10 + arr[i] ;
    return arr[i];
}
int main(){
    int n ;
    printf("Enter the number of element of the array : ") ;
    scanf("%d",&n) ;
    int arr[n] ;
    for(int i=0 ; i<=n-1 ; i++){
        printf("Enter the element number %d : ",i+1) ;
        scanf("%d",&arr[i]) ;
        if(i%2==0){
            arr[i] = incre(i,arr) ;
        }
        else{ 
            arr[i] = multi(i,arr) ;
        }
    }
    printf("The transformed array is : ") ;

    for(int j=0 ; j<=n-1 ; j++){
        printf("%d ",arr[j]) ;
    }
}
    