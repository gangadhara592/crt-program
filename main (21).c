#include<stdio.h>
int main()
{
    int x=10,y=15,z=5,p;
    p=++x*(y--+--z);
    printf("x=%d y=%d z=%d p=%d",x,y,z,p);
    return 0;
}