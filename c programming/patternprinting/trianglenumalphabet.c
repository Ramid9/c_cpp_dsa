#include<stdio.h>
int main(){
    int n  ;
    char ch ;
    printf("Enter a number : ") ;
    scanf("%d",&n) ;
     
    for(int i=1 ; i<=n ; i++){
        int m = 65 ;
        for( int j= 1; j<=i ; j++){
            if(i%2 ==0 ){
                ch = (char)m ;
                char cr = ch ;
                printf("%c ",cr) ;
                m++ ;
            }
            else{
                printf("%d ",j) ;

            }

        }
        printf("\n") ;
    }
}
