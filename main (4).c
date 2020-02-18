/* pointers with address value */
#include<limits.h>
#include<stdio.h>
void main()
{
    int a[100],n,l=INT_MIN;
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",a+i);
    for(i=0;i<n;i++)
    printf("%d",*(a+i));
    for(i=0;i<n;i++)
    {
        if(*(a+i)>l)
        l=*(a+i);
    }
    printf("%d",l);
}