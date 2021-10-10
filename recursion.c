/*Recursions:-Function calling itself*/

// #include <stdio.h>
// void main()
// {
//     /*c program to find the sum of first n natural numbers using functions(RECURSION)*/
//     int sum(int);
//     int n;
//     puts("Hey,Enter a number.");
//     scanf("%i", &n);
//     int k = sum(n);

//     printf("The sum of first %d natural numbers is %d", n, k);
// }
// int sum(int a)
// {
//     int s;
//     if (a == 1)
//         return (a);
//     s = a + sum(a - 1);
//     return (s);
// }


/*c program to find the factorial of a number using functions*/
#include<stdio.h>
void main()
{
    int f,n;
int factorial(int);
puts("Enter any number");
scanf("%d",&n);
f=factorial(n);
printf("Factorial of %d is %d",n,f);

}
int factorial(int a)
{
    int factorial=1;
for(int i=a;i>=1;i--)
factorial*=i;
return(factorial);
}