/* assigning array and addition of even elements */

#include <stdio.h>
void main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
   {
       if(arr[i]%2==0)
       printf("1");
       else
       printf("0");
   }
}
