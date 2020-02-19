/* nested structuers */
#include <stdio.h>
struct student
{
    struct person
    {
        char name[20];
        int age;
        char dob[10];
    }p;
    int rollno;
    float marks;
}stu;
void main()
{
    printf("enter rollno");
    scanf("%d",&stu.rollno);
    printf("enter name");
    scanf("%s",stu.p.name);
    printf("enter age");
    scanf("%d",&stu.p.age);
}
    