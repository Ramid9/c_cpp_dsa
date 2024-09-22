#include<stdio.h>
int fib(int x){
    if(x==1)return 0;
    if(x==2)return 1;
    int f = fib(x-1) + fib(x-2) ;
    return f;
}
int main(){
    int n, f ;
    printf("\nEnter n : ") ;
    scanf("%d",&n) ;
    f = fib(n) ;
    if(n==1)printf("The %dst fibonacci number is = %d",n,f) ;
    else if(n==2) printf("The %dnd fibonacci number is = %d",n,f) ;
    else if(n==2) printf("The %drd fibonacci number is = %d",n,f) ;
    else printf("The %dth fibonacci number is = %d",n,f) ;
    return 0;
}