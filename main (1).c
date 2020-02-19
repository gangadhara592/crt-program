/*  structuers */
#include <stdio.h>
struct point
{
    int x,y,z;
};
int main()
{
    struct point p1={1,2},*p2;
    p2=&p1;
    printf("%d%d",(*p2).x,p2->x);
    printf("\n%d%d,(*p2).y,p2->y");
    return 0;
  
    