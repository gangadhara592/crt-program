/* student details using structuers */
#include <stdio.h>
struct student {
    char sName[100];
    int sid;
    int m1,m2,m3;
} ;
void main()
{
    struct student s[10];
    int i,total;
    float avg;
    printf("enter the student details");
    for(i=0;i<2;i++)
    {
        scanf("%d",&s[i].sid);
        scanf("%s",s[i].sName);
        scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
    }
    for(i=0;i<3;i++)
    {
        printf("\nstudent %d details",i-1);
        printf("\nname:%s",s[i].sid);
        printf("\n marks are :%d%d%d",s[i].m1,s[i].m2,s[i].m3);
        total=s[i].m1+s[i].m2+s[i].m3;
        avg=(total/300)*100;
        printf("\n total marks:%d",total);
        printf("\n avg marks:%f",avg);
    }
}