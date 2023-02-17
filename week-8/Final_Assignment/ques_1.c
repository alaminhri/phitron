/*a) Define ternary operator. Write a C program to find the maximum of two numbers using ternary operators.*/
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int max = (a > b) ? a : b; //here is the ternary operation.Define as (?) sign. which takes three operands or variables.
    printf("Maximum of %d and %d is: %d\n", a, b, max);
    return 0;
}
