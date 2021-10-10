#include <stdio.h>
void main()
{
    char s[3][10];
    int i;
    puts("Hey,enter three strings");
    for (i = 0; i <= 2; i++)
        gets(s[i]); //OR  gets(&s[i][0]);
    puts("your entered strings are");
    for (i = 0; i <= 2; i++)
        /*  printf("%s\t",s[i]);   */
        puts(s[i]);
}