
#include<stdio.h>
int main() {
     float num, i, sum = 0;

    // Prompt the user to input a number
    printf("Input any number: ");
    scanf("%f",&num);

    // Display the initial part of the series
    printf("1 + ");

    // Print the series
    for(i = 2; i <= num - 1; i++)
        printf(" 1/%f +", i);

    // Calculate the sum of the series
    for(i = 1; i <= num; i++){
        sum = sum + 1/i;
        }
    // Display the last term of the series
    printf(" 1/%f", num);

    // Calculate and display the sum
    printf("\nSum = %f", sum);

    return 0;
}
