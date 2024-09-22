#include<stdio.h>
int factorial( int x ){
    int fact = 1 ;
    for(int i=1 ; i<=x ; i++){
        fact = fact*i ;
    }
    return fact ;
}
int main(){
    int n, r, ncr ;
    printf("\nEnter a n : ") ;
    scanf("%d",&n) ;
    printf("\nEnter a r : ") ;
    scanf("%d",&r) ;
    ncr = factorial(n)/(factorial(r)*factorial(n-r)) ;
    printf("The ncr is %d",ncr) ;
    return 0 ;
}