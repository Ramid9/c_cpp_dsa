#include<stdio.h>
int options(int x){
    if(x==1) return 1;
    if(x==2) return 2;
    if(x==3) return 4;
    int recAns = options(x-1) + options(x-2) + options(x-3) ;
    return recAns;
}
int main(){
    int n, count;
    printf("Enter number of stairs : ") ;
    scanf("%d",&n) ;
    count = options(n) ;
    printf("There are %d number of ways to reach the %dth stair",count,n) ;
    return 0;
}