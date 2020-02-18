/* 2 dimensional arrays*/
#include<stdio.h>
void main()
{
    int b[3][4]={{5,10,15,20},{25,30,35,40},{45,50,55,60}};
    printf("\n%d %d",**b,b[0][0]);
    printf("\n%d",*(*(b+1)));
    printf("\n%d",*(*(b+2)+2));
}
