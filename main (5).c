/* adam number */
#include<stdio.h>
int palindrome(int n)
{
    int r=0,t;
    t = n;
    while (n>0)
  {
    r = (r*10)+(n%10);
    n = n/10;
  }
    if(r==t)
    return t;
    else
    return 0;
  }
  void main()
  {
      int n,f;
      scanf("%d",&n);
      f=palindrome(n);
      if(palindrome(n*n)==f*f)
      printf("adam number");
      else
      printf("not an adam number");
  }

