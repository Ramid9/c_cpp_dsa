#include<stdio.h>
void reverse(int arr[], int a, int b){
    int i = a, j = b;
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
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    int k;
    printf("Enter the number of rotation : ");
   
    scanf("%d",&k);
    for(int i=0 ; i<=n-1 ; i++){
        printf("Enter the number %d element of the array: ",i+1);
        scanf("%d",&arr[i]);
    }
    k = k % n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1) ;
    reverse(arr,k,n-1);
    printf("The rotated array is : ") ;
    for(int j=0 ; j<=n-1 ; j++){
        printf("%d ",arr[j]) ;
    }
    return 0;
}