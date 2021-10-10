#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the lengths of three sides of a triangle\n ");
    scanf("%d %d %d",&a,&b,&c);
    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {

        if (a == b && b == c & c == a)
            printf("Equilateral triangle");
        else if (a == b || b == c || c == a)
            printf("Isosceles triangle");
        else if (a != b && b != c && c != a)
            printf("Scalene triangle");
        else if (a * a == b * b + c * c || b * b == c * c + a * a || c * c == b * b + a * a)
            printf("Right angle triangle");
    }
    else
        printf("Triangle is not possible");
    return 0;
}