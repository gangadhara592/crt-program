/* find largest element */ 
#include<stdio.h>
#include<limits.h>
void main()
{
    int a[100],i,n,l=INT_MIN;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  l=a[0];
  for(i=1;i<n;i++)
  {
      if(a[i]>l)
      l=a[i];
  }
  printf("%d",l);
}