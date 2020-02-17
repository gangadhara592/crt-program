/*  comparing the strings */ 
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20]="ece gurus";
    char s2[20]="ece gurus";
    int i;
      if(strcmp(s1,s2)==0)
    {
        printf("string s1and string 2 are equal");
    } 
    else
    {
        printf("string 1 and 2 are different");
    }
    i=strcmp(s1,s2);
    printf("\n%d",i);
    return 0;
}