/* pointer arthmetic #2*/
#include<stdio.h>
void main()
{
    int a[]={6,2,8,4,9},*p,n;
    p=a+2;
    n=*p;
    printf("\noutput1:%d",n);
    n=*++p;
    printf("\noutput2:%d",n);
    n=*(--p);
    printf("\noutput3:%d",n);
    n=*p--;
    printf("\noutput4:%d",n);
    n=(*p)++;
    printf("\noutput5:%d",n);
    n=++(*p);
    printf("\noutput6:%d",n);
    n=--*p;
    printf("\noutput7:%d",n);
    n=*(++p);
    printf("\noutput8:%d",n);
}

