#include<stdio.h>
void ispalind(int n, int arr[]){
    int count=0;
    for(int i=0,j=n-1 ; i<=j ; i++,j--){
        if(arr[i]==arr[j]) count++ ;
    }
    if(n%2==0 && count==(n/2)){
        for(int j=0 ; j<=n-1 ; j++){
            printf("%d ",arr[j]);
        }
        printf("This is a palindrome number.") ;
    }
    else if(n%2!=0 && count==(n/2 + 1)){
        for(int k=0 ; k<=n-1 ; k++){
            printf("%d ",arr[k]);
        }
        printf("This is a palindrome number.") ;
    }
    else{
        for(int l=0 ; l<=n-1 ; l++){
            printf("%d ",arr[l]);
        }
        printf("This is not a palindrome number.") ;   
    } 
    return;   
}
int main(){
    int n ;
    printf("Enter the number of digits : ") ;
    scanf("%d",&n) ;
    int arr[n] ;
    for(int i=0 ; i<=n-1 ; i++){
        printf("Enter the digit number %d : ",i+1) ;
        scanf("%d",&arr[i]) ;
    }
    ispalind(n,arr) ;
    return 0;
}