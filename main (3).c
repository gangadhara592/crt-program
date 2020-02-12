// * with out arguments * //
#include<stdio.h>
void prime(int n)
{
    int i,count=0;
    for(i=2;i<n;i++)
    if(n%i==0)
    count++;
    if(count==0)
    printf("%d is prime\n",n);
    else
    printf("%d is not prime\n",n);
}
void main()
{
    prime(10);
    prime(7);
}