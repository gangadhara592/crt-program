/* finding prime without loop */
#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    if(n==2||n==3||n==5||n==7)
    printf("prime number");
    if(n%2!=0&&n%3!=0&&n%5!=0&&n%7!=0)
    printf("prime number");
    else
    printf("not");
}