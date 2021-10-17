 /*c program for fibonacci series by recursion && finding a number entered by a user is in fibonacci series or not*/
 #include<stdio.h>
 void main()
 {
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