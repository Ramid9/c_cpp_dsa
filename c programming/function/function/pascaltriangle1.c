#include<stdio.h>
int main(){
    int n ;
    printf("\n Enter n : ") ;
    scanf("%d",&n) ;
    for(int i=0 ; i<n ; i++){
        for (int space = 0; space <n-i; space++) 
        printf("  ");
        int first=1 ;
        for(int j=0 ; j<=i ; j++){
            printf("%d",first) ;
            first = first*(i-j)/(j+1) ;
            printf("   ") ;
        }
        printf("\n") ;
    }
    return 0 ;
}