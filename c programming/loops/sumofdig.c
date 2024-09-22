#include<stdio.h>
int main()
{
    int n,sum = 0 , ldg;
    printf("Enter a number : ") ;
    scanf("%d",&n) ;
    while(n != 0)
    {
       ldg = n % 10 ;
       sum = sum + ldg ;
       n = n / 10 ; 
    }
    printf("The sum of the digits of the number is %d",sum) ;
    return 0 ;
}