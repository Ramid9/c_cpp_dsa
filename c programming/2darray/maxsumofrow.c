#include<stdio.h>
int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int maxsum = 0, a;
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum = sum + arr[i][j];
            if(sum>maxsum){
                maxsum = sum;
                a = i;
            }
        }
    }
    printf("The maximun sum is %d [%d number row]",maxsum,a+1);
    return 0;
}