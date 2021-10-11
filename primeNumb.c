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
    
/*another way,actually a simpler way available */


    // int n, i, count = 0;
    // printf("enter any number\n");
    // scanf("%d", &n);

    // for (i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //         count = count + 1; //count++;
    // }

    // if (count == 2)
    //     printf("%d is Prime number", n);
    // else

    //     printf("%d is NOT Prime number", n);

    
}