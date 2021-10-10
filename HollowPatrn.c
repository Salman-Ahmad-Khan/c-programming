#include <stdio.h>
void main()
{
    //     for(int i=1;i<=10;i++)
    //     {
    //         for(int j=1;j<=10;j++)
    //         {
    //             if(i==1|| i==10 || j==1 || j==10 )
    //         printf("*");
    //         else
    //         printf(" ");

    //         }
    //         printf("\n");
    //     }

    // int i, n,j;
    // printf("Enter a number\n");
    // scanf("%d",&n);
    //     for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j<= n; j++)

    //     {
    //         if (j <= i)
    //             printf("* ");
    //         else
    //             printf(" ");
    //     }
    //     printf("\n");
    // }

    int i, n, j;
    printf("Enter any number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n || i == 2 || i == n - 1 || j == 2 || j == n - 1)

                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}