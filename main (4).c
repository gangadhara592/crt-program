/* sorting half of the numbers #3*/
#include<stdio.h>
void main()
{
    int a[100],i,j,n,t,min,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=n/2;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            min=j;
        }
        t=a[min];
        a[min]=a[i];
        a[i]=t;
        printf("\n pass %d:",i+1);
        for(k=0;k<n;k++)
        printf(" %d",a[k]);
    }
}