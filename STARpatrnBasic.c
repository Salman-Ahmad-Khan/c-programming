#include <stdio.h>
void main()
{
    /* c program to print this pattern
              *****
              *****
              *****
              *****
              ***** 
        */
    //     for (int j = 0; j < 5; j++)
    //     {

    //         for (int i = 0; i < 5; i++)
    //         {
    //             printf("*");
    //         }

    //         printf("\n");
    //     }
    // }

  /*c program to print this pattern 
                *    
                **
                ***
                ****
                *****
        */
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         if (j <= i)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }
    //     printf("\n");
    // }



 /*c program to print this pattern
                         *
                        **
                       ***
                      ****
                     *****
        */

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j >= 6- i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}