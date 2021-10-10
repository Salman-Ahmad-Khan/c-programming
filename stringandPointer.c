/*c program to calculate the length of a string*/
// #include <stdio.h>

// void main()
// {
// char s[20],*p;
// p=&s[0];
// int i;
// puts("Enter a string");
// gets(s);
// for(i=0;*(p+i)!='\0';i++);
// printf(" the length of your string \'%s\' is %d",s,i);
// }



/* c program to reverse a string*/
#include<stdio.h>
#include<string.h>
void main()
{
    char x[50],t;
    int l,i;
    puts("Enter any string");
    gets(x);
    for(l=0;x[l]!='\0';l++);
     
     for(i=0;i<l/2;i++)
     {
      t=x[i];
      x[i]=x[l-1-i];
      x[l-1-i]=t;
     }
     printf("%s",x);
     
     




    
}