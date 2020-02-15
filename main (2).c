/* counting no. of vowels and consonants using string */
#include<stdio.h>
void main()
{
    char s[10];
    int i,v=0,c=0;
    gets (s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
           v++;
        else
          c++;
    }
    printf("v:%d c:%d",v,c);
}
