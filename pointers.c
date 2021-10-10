#include <stdio.h>
void main()
{

    // int x = 5;
    // int t = 10;

    // printf("The number is %d\n", x);
    // printf("The  address number of %d is %d\n", x, &x);
    // printf("The number is %d\n", t);
    // printf("The  address number of %d is %d", t, &t);

    // int x = 5;
    // int *j;//declaration of a pointer.
    // j = &x;
    // printf("%d %d\n", x, j);
    // printf("%d %d\n", *j, &x);
    // printf("%d", *&x);

    /* Extented concept of a pointer*/
    int x = 550;       // ordinary variable
    int *p, **q, ***r; // pointer variables and thier declaration
    p = &x;
    q = &p;
    r = &q;
    printf("%d\n", x);
    printf("%d  %d\n", p, &x);
    printf("%d  %d\n", q, &p);
    printf("%d  %d\n", r, &q);
    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("%d\n", *r);
    printf("%d\n", **q);
    printf("%d\n", ***r);
}