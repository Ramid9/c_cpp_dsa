#include<stdio.h>
int main(){
    int r;
    printf("Enter number of students : ");
    scanf("%d",&r);
    int arr[r][4];
    printf("Enter the Roll number and Marks of the students : ");
    for(int i=0; i<r; i++){
        for(int j=0; j<4; j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");

    }
    for(int i=0; i<r; i++){
        printf("Roll no.: ");
        for(int j=0; j<4; j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    
}
