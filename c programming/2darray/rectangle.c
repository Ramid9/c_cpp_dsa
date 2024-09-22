#include<stdio.h>
int main(){
    int m, n, sum=0;
    printf("Enter number of rows : ");
    scanf("%d",&m);
    printf("Enter number of columns : ");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter the elements of the matrix : \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("Enter the [%d][%d] element : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int l1, r1, l2, r2;
    printf("Enter the point A : ");
    scanf("%d%d",&l1,&r1);
    printf("Enter the point B : ");
    scanf("%d%d",&l2,&r2);
    for(int i=m-l1; i<m-l2; i++){
        for(int j=n-r1; j<n-r2; j++){
            sum = sum + arr[i][j];
        }
    }
    printf("The sum between A and B is = %d ",sum);


    return 0;
}