/*  adding character using string */ 
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10]="hello";
    char s2[10]="world";
    strcat(s1,s2);
    printf("output string after concatenation:%s",s1);
    return 0;
}