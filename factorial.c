// #include <stdio.h>
// int factorial(int number)
// {
//     if (number == 0 || number == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return (number * factorial(number - 1));
//     }
// }
// int main()
// {
//     int numb;
//     printf("Enter the number you want factorial of:\n");
//     scanf("%d", &numb);
//     printf("The factorial of %d is %d", numb, factorial(numb));
//     return 0;
// }


//or
{
double n,i,fact=1;
printf("Enter the number you want factorial of\n");
scanf("%lf",&n);

// for(i=1;i<=n;i++) 
   for(i=n;i>=1;i--)
{
    fact*=i;  //fact=fact*i;
}
printf("The factorial of %lf is %lf",n,fact);


}