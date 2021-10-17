/*
Ackerman Function:
A(m,n) = n+1,   if (m=0)

A(m,n) = A(m-1,1),   if (m>0 && n=0)

A(m,n) = A(m-1,A(m,n-1)),   if (m>0 && n>0)
*/

#include <stdio.h>
int ack(int, int);
void main()

{
    int m, n, s;
    printf("Enter the value of 'm'\n");
    scanf("%i", &m);
    printf("Enter the value of 'n'\n");
    scanf("%i", &n);

    //     s = ack(m, n);
    //     printf("The Result of ack(%d,%d) is %i", m, n, s);
    //
    printf("The Result of ack(%d,%d) is %i", m, n, ack(m, n));
}

int ack(int m, int n)
{
    if (m == 0)
        return (n + 1);
    else if (m > 0 && n == 0)
        return (ack(m - 1, 1));
    else if (m > 0 && n > 0)
        return (ack(m - 1, ack(m, n - 1)));
}