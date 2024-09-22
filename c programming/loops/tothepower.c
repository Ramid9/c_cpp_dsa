#include<stdio.h>
int main()
{
    int a , b , i, pow = 1; 
    printf("Enter two numbers : ") ;
    scanf("%d %d",&a,&b) ;
    i = b ;
    while(i>0)
    {
        pow = pow*a ;
    
        i-- ;
    }
    printf("%d to the power %d is : %d",a,b, pow) ;
    return 0 ;
}