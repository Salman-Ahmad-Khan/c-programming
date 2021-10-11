/*c program to check a number is prime or not by  using function*/

#include <stdio.h>
void prime(int);
void main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d", &n);

    prime(n);
}
void prime(int x)
{
    int count = 0, i;
    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
            count++;
    }
    if (count == 2)
        printf("%d is Prime number", x);
    else
        printf("%d is NOT a Prime number", x);
}