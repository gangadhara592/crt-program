/* counting no. of characters using string */
#include<stdio.h>
void main()
{
    char s[10];
    int i;
    gets (s);
    for(i=0;s[i]!='\0';i++);
    printf("%d",i);
}