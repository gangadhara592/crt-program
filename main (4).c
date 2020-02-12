// * with return value and without arguments *//
#include<stdio.h>
int add()
{
    int a,b;
    scanf("%d%d",&a,&b);
    return a+b;
}
void main()
{
    printf("%d",add());
}