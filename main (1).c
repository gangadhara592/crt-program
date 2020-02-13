/* assigning array and addition of elements */

#include <stdio.h>
void main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    sum+=arr[i];
    printf("%d",sum);
}
