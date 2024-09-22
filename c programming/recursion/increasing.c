#include<stdio.h>
void incrsng( int x, int n){
    if(x>n) return;
    printf("%d\n",x) ;
    incrsng(x+1,n);
    return;
}
int main(){
    int n ;
    printf("Enter a number : ") ;
    scanf("%d",&n) ;
    incrsng(1,n) ;
    return 0;
}