#include<stdio.h>
int power(int x, int y){
    if(y==0)return 1 ;
    int p = x*power(x,y-1) ;
    return p;
}
int main(){
    int a, b, pow ;
    printf("Enter base : ") ;
    scanf("%d",&a) ;
    printf("Enter power : ") ;
    scanf("%d",&b) ;
    pow = power(a,b) ;
    printf("%d to the power %d is = %d",a,b,pow) ;
    return 0;
}