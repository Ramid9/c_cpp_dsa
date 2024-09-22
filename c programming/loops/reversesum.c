#include<stdio.h>
int main()
{
    int n, re = 0 , n1;
    printf("Enter a number : ") ;
    scanf("%d",&n) ;
    n1= n  ;
    while(n > 0)
    {
        re = re + (n % 10) ;
        re = re * 10 ;
        n = n / 10 ;

    }
    re = re/10 ;
    printf("The sum of %d and %d is %d",n1,re,(n1+re) );
    return 0 ;
}