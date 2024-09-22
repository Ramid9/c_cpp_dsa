#include<stdio.h>
int factorial( int x ){
    int fact = 1 ;
    for(int i=1 ; i<=x ; i++){
        fact = fact*i ;
    }
    return fact ;
}
int ncr( int a , int b){
   int acb = factorial(a)/(factorial(b)*factorial(a-b)) ;
   return acb;
}
int main(){
    int n ;
    printf("\nEnter  n : ") ;
    scanf("%d",&n) ;
    for(int i=0 ; i<n ; i++){
        for (int space = 0; space <n-i; space++) 
        printf("  ");
       
        for(int j=0 ; j<=i ; j++){
            printf("%d ",ncr(i,j)) ;
            printf("  ") ;
        }
        printf("\n") ;
    }
   
   
    return 0 ;
}