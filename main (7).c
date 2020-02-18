/* pointer arthmetic*/
#include<stdio.h>
void main()
{
    int a[]={6,2,8,4,9},*b;
    for(b=a;b<=a+4;b++)
    printf("\n%d",*b);
}
