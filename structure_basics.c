#include <stdio.h>

//definition of structure
struct date
{
    int d, m, y;
};
void main()
{
    /*initialising the variable 'today'*/

       struct date today={12,07,2021};// 'date' is a data type now and 'today' is a variable.
    // printf("Date:%d-%d-%d", today);

    /*aliter*/
    // struct date today;
    // today.d = 12;
    // today.m = 07;
    // today.y = 2021;

    // printf("Date:%d-%d-%d", today.d, today.m, today.y);


    /*if we make another variable of type 'date' (let it be d2) and we have to copy the data from varible 'today' to a varible 'd2' */
   struct date d2;
//    d2=today;
//    printf("Date:%d-%d-%d",d2);

   //aliter

//    d2.d=today.d;
//    d2.m=today.m;
//    d2.y=today.y;
//    printf("Date:%d-%d-%d",d2);


   /*if we have to input date from a user*/
   printf("Pls enter today's date\n");
   scanf("%d-%d-%d",&d2.d,&d2.m,&d2.y);
   printf("Date:%d-%d-%d",d2.d,d2.m,d2.y);

}
