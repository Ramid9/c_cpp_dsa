#include<stdio.h>
int main(){
    int r1, c1, r2, c2;
    printf("Enter rows and columns of 1st matrice:");
    scanf("%d%d",&r1,&c1);
    printf("Enter rows and columns of 2nd matrice:");
    scanf("%d%d",&r2,&c2);
    int arr[r1][c1], brr[r2][c2];
    if(r1==r2 && c1==c2){
        printf("Enter elements of 1st matrix :");
        for(int i=0; i<r1; i++){
            for(int j=0; j<c1; j++){
                printf("Enter[%d][%d] element of matrix : ",i,j);
                scanf("%d",arr[i][j]);
            }
        }
         printf("Enter elements of 2nd matrix :");
        for(int i=0; i<r1; i++){
            for(int j=0; j<c1; j++){
                printf("Enter[%d][%d] element of matrix : ",i,j);
                scanf("%d",arr[i][j]);
            }
        }
        printf("Sum of the two matrices :");
        for(int i=0; i<r1; i++){
            for(int j=0; j<c1; j++){
                printf("%d ",arr[i][j]+brr[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Invalid rows and columns.");
    }

    return 0;
}