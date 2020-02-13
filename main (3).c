#include <stdio.h>
void main()
{
    int n,i,min,max;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    min=max=arr[0];
    for(i=0;i<n;i++)
    {
        if(min>arr[i])
        min=arr[i];
        if(max<arr[i])
        max=arr[i];
    }
}