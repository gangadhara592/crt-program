#include<stdio.h>
int main()
{
int n,x1=0,x2=1,x,i;
scanf("%d",&n);
printf("%d%d",x1,x2);
i=1;
do
{
    x=x1+x2;
    printf("%d",x);
    x1=x2;
    x2=x;
    i++;
}while(i<=n-2);
return 0;
}