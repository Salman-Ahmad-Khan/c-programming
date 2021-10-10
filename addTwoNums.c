/* c program to add two numbers taken from a user*/
#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Pls enter the first number:\n");
    scanf("%i", &a);
    printf("Pls enter the second number:\n");
    scanf("%i", &b);
    c = a + b;
    printf("sum of %i+%i = %i", a, b, c);
}