/* find second largest element */ 
#include<stdio.h>
#include<limits.h>
void main()
{
    int a[100],i,n,l1,l2;
    l1=l2=INT_MIN;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=1;i<n;i++)
  {
      if(a[i]>l1)
      {
          l2=l1;
          l1=a[i];
      }
      else if(a[i]>l2)
      l2=a[i];
  }
  printf("%d",l2);
}