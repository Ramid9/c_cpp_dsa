#include<stdio.h>
double operation(double, double, char);
int main(){
    double num[2], prod ;
    char op;
    printf("\n\nEnter the operation(+,-,*,/) : ");
    scanf("%c",&op);

    for(int i = 0 ; i<2 ; i++){
        
        printf("\n\nEnter the first number : ");
        scanf("%lf",&num[i]);

        i++;
        if(i==2){
            printf("Can not enter more numbers!");
        }
        else{
            printf("\n\nEnter the next number : ");
            scanf("%lf",&num[i]);
        }
        prod = operation( num[i-1],num[i],op);

        
    }
    for(int i = 0 ; i<2 ; i++){
        printf("%lf %c %lf= %lf",num[i-1],num[i],op,prod);
       
    }
}
double operation(double x , double y, char op){
    switch(op){
        case '+' :return(x+y);
            break;
        case '-' :return(x-y);
            break;
        case '*' :return(x*y);
            break;
        case '/' :return(x/y);
            break;
        default: printf("You entered invalid charecter.");
    }

}