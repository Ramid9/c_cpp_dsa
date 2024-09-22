#include<stdio.h>
#include<limits.h>
int main(){
    int m, n, max, a, b, min, c, d;
    printf("Enter number of rows : ");
    scanf("%d",&m);
    printf("Enter number of columns : ");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter the elements : \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Enter [%d][%d] element :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    max = arr[0][0];
    min = INT_MAX;
    for(int j=1; j<n; j++){
        for(int i=1; i<m; i++){
            if(max<arr[i][j]){
                max = arr[i][j];
                a = i;
                b = j;
            }
            if(min>arr[i][j]){
                min = arr[i][j];
                c = i;
                d = j;
            }
        }
    }
    printf("The maximum element of matrix = %d arr[%d][%d] \n",max,a,b);
    printf("The minimum element of matrix = %d arr[%d][%d] \n ",min,c,d);
    return 0;
}