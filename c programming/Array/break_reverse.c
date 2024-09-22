#include<stdio.h>
void swap(int arr[],int start , int end){
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
}
int main(){
    int  n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n] ;
    printf("Enter the elements of the array: \n");
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    // breaking position
    int pos;
    printf("Enter index number of  array to break: ");
    scanf("%d",&pos);
    // reverse first  part 
    int start=0 , end = pos;
    while(start<end){

        swap(arr,start,end);
        start++ , end--;
    }
    // reverse second  part 
     start= pos+1 , end = n-1;
    while(start<end){

        swap(arr,start,end);
        start++ , end--;
    }
    // print the reversed array 
    for(int i=0 ; i<n ; i++)
        printf("%d  ",arr[i]);



}