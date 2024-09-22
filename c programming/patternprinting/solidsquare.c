#include<stdio.h>
int main(){
    int n,m ;
    printf("Enter number of rows : ") ;
    scanf("%d",&n) ;
    printf("Enter number of coloums : ") ;
    scanf("%d",&m);
    
    for( int i =1 ;i <= n ; i++ ){
        for( int k=1 ; k<=m ; k++){
            printf("*");
            }
        
        printf("\n") ;
    }
        
    
    return 0;
}