/ * sorting of string characters * /
#include<stdio.h>
#include<string.h>
int main()
{
char string[30];
char temp;
int i,j,n;
printf("enter string:");
gets(string);
printf("string before sorting-%s\n",string);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(string[i]>string[j])
{
temp=string[i];
string[i]=string[j];
string[j]=temp;
}
}
}
printf("string after sorting -%s\n",string);
return 0;
}
