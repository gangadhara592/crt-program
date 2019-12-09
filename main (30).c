#include <stdio.h>
int main()
{
    int i=1;
    a:
    printf("%d",i);
    i++;
    if(i<=10)
    goto a;
  return 0;
}

