#include<stdio.h>
void reverse(int arr[]){
    int i = 0, j = 4 ;
    while(i<j){
        int temp = arr[i] ;
        arr[i] = arr[j] ;
        arr[j] = temp ;
        i++ ;
        j-- ;
    }
    return;
    
}
int main(){
    int arr[5] = {1,2,3,4,5};
    reverse(arr) ;
    printf("The reversed array is : ") ;
    for(int j=0 ; j<=4 ; j++){
        printf("%d ",arr[j]) ;
    }
    return 0;
}