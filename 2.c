/* frequency of characters */
#include<stdio.h>
void main()
{
char str[1000];
int i,c[123]={0};
printf("enter a string:");
gets(str);
for(i=0;str[i]!='\0';++i)
{
c[str[i]]++;
}
for(i=0;i<123;i++)
{
if(c[i]>0)
printf("\n%c--->%d",i,c[i]);
}
}
