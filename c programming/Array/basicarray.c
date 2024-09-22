#include<stdio.h>
int main(){
    int marks[10] ;
    for(int i=0 ; i<=9 ; i++){
        printf("\nEnter the marks of the student number %d: ",i+1) ;
        scanf("%d",&marks[i]) ;
    }
    printf("The Roll numbers of the failed students are : ") ;
    for(int i=0 ; i<=9 ; i++){
        if(marks[i]<35) printf("%d ",i) ;
        //return 0;
    }
}