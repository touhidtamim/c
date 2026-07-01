//Write a C program that declares two integer variables, assigns them values, and prints their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    int num1 , num2; 

    scanf("%d %d", &num1, &num2);
    
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);

    return 0;
}