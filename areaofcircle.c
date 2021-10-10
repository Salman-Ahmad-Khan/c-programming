
// C program to find the area of a circle
#include <stdio.h>
#include <math.h>
int main()
{
    float radius, area;
    printf("Enter the radius of circle\n");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("Area of circle is %.2f\n",(float) area);
    return 0;
}