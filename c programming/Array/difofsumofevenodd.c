#include<stdio.h>
int main(){
    int arr[5] = {0,2,3,4,5} ;
    int sumev = 0, sumod = 0 ;
    for(int i=0 ; i<=4 ; i++){
        if(i%2==0) sumev = sumev + arr[i] ;
        else sumod = sumod + arr[i] ;
    }
    printf("The difference is : %d ",sumev-sumod) ;
    return 0;
}