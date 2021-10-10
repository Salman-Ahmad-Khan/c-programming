/* c program to compare two numbers */

#include <stdio.h>
void main()
{
    int a, b;
    printf("Pls enter two integers\n");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf(" %d is greater than %d", a, b);
    else if (b > a)
        printf(" %d is  greater than %d ", b, a);
    else
        printf("The intergers %d and %d are equal",a,b);
        
        
        
        
        
        
        
        
        
}