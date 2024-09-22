#include<stdio.h>
void decrsng(int x){
    if(x==0) return;
    printf("%d\n",x) ;
    decrsng(x-1);
    printf("%d\n",x) ;
    return;
}
int main(){
    int x ;
    printf("Enter a number : ") ;
    scanf("%d",&x) ;
    decrsng(x) ;
    return 0;
}