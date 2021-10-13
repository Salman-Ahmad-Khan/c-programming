#include <stdio.h>
struct book book_input();
void display(struct book);
struct book
{
    int book_id;
    float price;
    char title[30];
};

void main()
{
    struct book b;
    b = book_input();
    display(b);
}

struct book book_input()
{
    struct book b1;
    printf("Enter the book ID\n");
    scanf("%d", &b1.book_id);

    printf("Enter the book title\n");
    fflush(stdin);
    gets(b1.title);

    printf("Enter the book price\n");
    scanf("%f", &b1.price);

    return (b1);
}

void display(struct book b2)
{
    printf("The book details are\nBook Price is '%f'\nBook Title is '%s'\nBook ID is '%d'", b2.price, b2.title, b2.book_id);
}
