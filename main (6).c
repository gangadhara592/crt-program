/* 2 dimensional arrays in pointers*/
#include<stdio.h>
void main()
{
    int b[3][4]={{5,10,15,20},{25,30,35,40},{45,50,55,60}};
    int *r;
    r=&b[0][0];
    printf("\n%d",*r);
    printf("\n%d",*(r+1));
    printf("\n%d",r[10]);
}
