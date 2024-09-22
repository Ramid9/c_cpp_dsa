#include<stdio.h>
int sum(int x){
    if(x==1 || x==1) return x;
    int su = x+sum(x-1) ;
    return su;
}
int main(){
    int n, s ;
    printf("Enter a number : ") ;
    scanf("%d",&n) ;
    s=sum(n) ;
    printf("Sum of 0 to %d is = %d",n,s) ;
    return 0 ;
}