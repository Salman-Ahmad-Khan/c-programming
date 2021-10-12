#include<stdio.h>
struct book
{
    int book_id;
    float price;
    char title[20];
};
void main()
{
   struct book b;
   printf("Enter the book ID\n");
   scanf("%d",&b.book_id);

   printf("Enter the book price\n");
   scanf("%f",&b.price);

   printf("Enter the book title\n");
   fflush(stdin);//to make the buffer empty and take the new input.
//    scanf("&s",&b.title);
   gets(b.title);

   printf("The book has the following details\n Book ID is %d\nBook Price is %f\nBook title is %s",b.book_id,b.price,b.title);
}