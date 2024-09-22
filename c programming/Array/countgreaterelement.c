#include<stdio.h>
int main(){
    int arr[5] = {4,5,6,6,14}, n, count = 0 ;
    printf("Enter the number : ") ;
    scanf("%d",&n) ;
    for(int i=0 ; i<=4 ; i++){
        if(arr[i]>n) count++ ;
    }
    printf("There are %d number of elements in the array greater than %d",count,n) ;
    
}