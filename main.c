/* counting no. of characters using string */
#include<stdio.h>
#include<string.h>
void main()
{
    char s[10];
    int i,n;
    gets (s);
    n=strlen(s);
    for(i=0;s[i] !='\0';i++)
    printf("%c\n",s[i]);
    for(i=0;i<n;i++)
    printf("%c\n",s[i]);
}