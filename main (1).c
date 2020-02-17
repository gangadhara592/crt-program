/*  adding required characters using string */ 
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10]="hello";
    char s2[10]="world";
    strncat(s1,s2,3);
    printf("output string after concatenation:%s",s1);
    return 0;
}