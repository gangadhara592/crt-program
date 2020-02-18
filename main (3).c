/* pointers with address value */
#include<stdio.h>
void main()
{
    int a=10;
    int *p;
    p=&a;
    printf("\n a=%d",a);
    printf("\n*p=%d",*p);
    printf("\n address of a=%p",&a);
    printf("\n address of a=%p",p);
}