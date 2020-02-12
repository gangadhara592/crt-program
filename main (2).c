// * with out arguments * //
#include<stdio.h>
int add(int a,int b)
{
return a+b;
}
void main()
{
int a;
a=add(10,20);
printf("%d",a);
printf("%d",add(100,200));
}