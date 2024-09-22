#include<stdio.h>
void sum(int x , int su){
    if(x==0) {
        printf("sum is =%d.",su) ;
        return ;
    }    
    sum(x-1,su+x) ;
}
int main(){
    int n, s ;
    printf("Enter a number : ") ;
    scanf("%d",&n) ;
    sum(n,0) ;
    return 0 ;
}