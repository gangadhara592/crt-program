#include<stdio.h>
void even_odd(int n)
{
    if (n%2==0)
    printf("%d is even\n",n);
    else
    printf("%d is odd\n",n);
}
void main()
{
    even_odd(10);
    even_odd(9);
}


