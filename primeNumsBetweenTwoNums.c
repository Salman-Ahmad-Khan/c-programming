#include <stdio.h>
void main()
{
    int n1, n2, i, count = 0, x;
    printf("Enter two numbers\n");
    scanf("%d%d", &n1, &n2);

    printf("Prime numbers between %d and %d are: ",n1,n2);

    for (x = n1 + 1; x <= n2 - 1; x++)
    {
        for (i = 2; i < x; i++)
        
            if (x % i == 0)
                break;

                if (i==x)
            printf("%d ", x);
        
        
    }
    





    
}