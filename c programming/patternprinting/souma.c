#include<stdio.h>
int main()
{int a,b,c;
printf("Enter a number");
scanf("%d%d%d",&a,&b,&c);
printf("you have entered %d %d %d as three numbers\n",a,b,c);
int max=a;
if(b>max)
max=b;

if(c>max)
max=c;
printf("max %d\n",max);
return 0;}

