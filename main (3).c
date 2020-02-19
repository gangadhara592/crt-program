/* no sorting #3*/
#include<stdio.h>
void main()
{
    int a[20],i,j,n,t,flag;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
        if(a[j]>a[j+1])
        {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
            flag=1;
        }
    }
    if(flag=0)
    {
        printf("no need to sort");
        break;
    }
    }
}