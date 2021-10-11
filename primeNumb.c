//c program to check a given number is prime or not.

#include <stdio.h>
void main()
{
        int n,i;
        printf("Enter a number\n");
        scanf("%d", &n);
        for ( i = 2; i <= n - 1; i++)
            if (n % i == 0)
                break;

        if (i == n)
            printf("%d is PRIME number\n", n);
        else
            printf("%d is  NOT a Prime number\n", n);
    }

    
