#include<stdio.h>
#include<string.h>
int main(){
    typedef struct student{
        char name[50];
        int sem;
        int Rank;
    } student;
    student arr[3];
    
    strcpy(arr[0].name,"Ramid Roy Majhi");
    arr[0].sem = 2;
    arr[0].Rank = 42;
    strcpy(arr[1].name,"Ramid Roy Majhi");
    arr[1].sem = 3;
    arr[1].Rank = 35;
    strcpy(arr[2].name,"Ramid Roy Majhi");
    arr[2].sem = 4;
    arr[2].Rank = 25;
    for(int i=0; i<=2; i++){
        printf("Name : %s\n",arr[i].name);
        printf("Sem : %d\n",arr[i].sem);
        printf("Rank : %d\n",arr[i].Rank);
        printf("\n");
    }
    return 0;
}