//c program for fibonacci series: 0  1   1   2   3   5   8   13 . . .
// next term is sum of previous two terms.

#include <stdio.h>

void main()
{
    // int n, i, a = -1, b = 1, c;
    // puts("How many terms of fibbonacci series you want to print\n");
    // scanf("%i", &n);
    // printf("Fibonacci Series:\n");
    // // printf("%d %d ",a,b);
    // for (i = 1; i <= n; i++)
    // {
    //     c = a + b;
    //     printf("%i ", c);
    //     a = b;
    //     b = c;
    // }

    /*c program for fibonacci series by recursion && finding a number entered by a user is in fibonacci series or not*/
    int i, n,s,flag=0;
    int fib(int);
    puts("How many terms of fibbonacci series you want to print\n");
    scanf("%i", &n);
    printf("The %i terms of Fibonacci Series:\n",n);

    for(i=1;i<=n;i++)
    {
        printf("%i ",fib(i));
    }

    printf("\n");
    printf("\nEnter the number you want to search in this series\n");
    scanf("%i",&s);

    printf("\n");


   for(i=1;i<=n;i++)
   {
       if(s==fib(i))
       {
           flag=1;
           printf("Congratulations!\nThe entered number '%i' is in the Fibonaci Series at %ith position\n",s,i);
           break;
       }
   }
   if(flag==0)
   {
       printf("Sorry\nThe number you are searching(%i) is nowhere in the Fibonaci Series\n",s);
   }




}

int fib(int p)
{
    if(p==1||p==2)
    return (1);
    return (fib(p-1)+fib(p-2));
}