#include<stdio.h>
struct sample
{
int x;
float y;
char z;
struct sample *p1;
};
void main()
{
struct sample s1;
struct sample s2={12,45.6,'D',NULL};
struct sample s3={10,4.7,'m',&s2};
s1.x=85;
s1.y=7.2;
s1.z='j';
s1.p1=&s3;
printf("\n %d",s1.x);
printf("\n %f",s1.y);
printf("\n %c",s1.z);
printf("\n %d",(s3.p1)->x);
printf("\n %f",s3.p1->y);
printf("\n %c",s3.p1->z);
printf("\n %p",s3.p1->p1);
}
