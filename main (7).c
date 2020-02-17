/*  copy character uring string */ 
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30]="cse";
    char s2[30]="gurus";
    strcpy(s1,s2);
    printf("string s1 is:%s",s1);
    return 0;
}