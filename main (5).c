/* add of int using string */
#include<stdio.h>
void main()
{
    char s[10];
    int i,sum=0;
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
      if(s[i]>='0'&&s[i]<='9')
      sum+=(s[i]-48);
    }
    printf("sum:%d",sum);
}