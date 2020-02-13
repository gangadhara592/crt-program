
#include <stdio.h>
void main()
{
    int n,i=0;
    scanf("%d",&n);
    int arr[10];
   while(n>0)
   {
       arr[i]=n%10;
       n=n/10;
       i++;
   }
   for(i=i-1;i>=0;i--)
   printf("%d ",arr[i]);
}