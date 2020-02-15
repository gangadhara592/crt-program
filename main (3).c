/* word in a column using string */
#include<stdio.h>
void main()
{
    char s[10];
    int i=0;
    gets (s);
    for(i;s[i]!='\0';i++)
    printf("%c\n",s[i]);
}