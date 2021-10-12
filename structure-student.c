#include<stdio.h>
struct student
{
    int roll_num;
    float marks;
    char name[30];

};
void main()
{
    // struct student s1; //student is now a data type and s1 is its varibale.
    // printf("Hey,enter your roll number\n");
    // scanf("%d",&s1.roll_num);

    // printf("Hey,enter your name\n");
    // 
    // scanf("%s",&s1.name);
    //gets(s1.name);

    // printf("Hey,enter your marks\n");
    // scanf("%f",&s1.marks);

    // printf("The student 's1' has '%d' roll number whose name is '%s' has '%f' marks",s1.roll_num,s1.name,s1.marks);



    /*if we have to take data from multiple students*/
//    struct student s[2];
//    int i;
//    for( i=1;i<3;i++)
//    {
//        printf("Enter your roll number,name and marks for student %d\n",i);
       
//        scanf("%d-%s-%f",&s[i].roll_num,&s[i].name,&s[i].marks);

//    }

//    for( i=1;i<3;i++)
//     printf("%d-%s-%f\n",s[i].roll_num,s[i].name,s[i].marks);
}