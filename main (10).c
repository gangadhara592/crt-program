/* pointer arthmetic #3(2)*/
#include<stdio.h>
void main()
{
    int i,runs=0;
    char a[6];
    for(i=0;i<6;i++)
    scanf(" %c",a+i);
    for(i=0;i<6;i++)
    {
        if(*(a+i)!='w')
    runs=runs+*(a+i)-48;
    }
    printf("total runs= %d",runs);
    for(i=0;i<4;i++)
    {
        if(*(a+i)==*(a+i+1)&&*(a+i)==*(a+i+2))
        {
            if(*(a+i)=='4')
            printf("\n hat-trick 4");
            if(*(a+i)=='6')
            printf("\n hat-trick 6");
            if(*(a+i+3)=='w')
            {
            printf("double hat-trick");
            i++;
            }
            else
            printf("hat-trick wicket");
        }
    }
}

