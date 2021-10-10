// #include<stdio.h>
// void main()
// {

// int a,b,t;
// puts("Enter two numbers");
// scanf("%d%d",&a,&b);
// //Swapping
// t=a;
// a=b;
// b=t;
// printf("The swapped numbers:%d %d",a,b);
// }

/* c program to swap two numbers using "functions" and "pointers" */
#include <stdio.h>
void swap(int *, int *);

void main()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    swap(&a, &b); ///(Call by refernce or address)        actual arguments
    printf("Swapped numbers:a=%d b=%d", a, b);
}
void swap(int *x, int *y) //formal arguments(pointer variables)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

