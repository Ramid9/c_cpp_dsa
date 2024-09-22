#include<stdio.h>
int main()
{
    int n,a =0 ,b  =1 , sum = 1, i;
    printf("Enter the number : ") ;
    scanf("%d",&n) ;
    for( i=1 ; i<=(n) ; i++)
    {
        sum = a + b ;
        if(i==n)
            printf("The %dth fibonacci number is : %d\n",i,a ); 
        a = b ;
        b = sum  ;
        
    }  
    return 0 ;

}