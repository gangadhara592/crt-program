/* checking the upper and lower alphabets using string */
#include<stdio.h>
void main()
{
    char s[10];
    int i,u=0,l=0;
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
       if(s[i]>='A'&&s[i]<='Z')
       u++;
       else if(s[i]>='a'&&s[i]<='z')
       l++;
    }
    printf("u:%d l:%d",u,l);
}
