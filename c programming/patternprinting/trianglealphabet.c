#include<stdio.h>
int main(){
    int n  ;
    char ch ;
    printf("Enter a number : ") ;
    scanf("%d",&n) ;
     
    for(int i=1 ; i<=n ; i++){
        int m = 65 ;
        for( int j= 1; j<=i ; j++){
            ch = (char)m ;
            char cr = ch ;
            printf("%c ",cr) ;
            m++ ;
        }
        printf("\n") ;
    }
}