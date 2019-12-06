#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	printf("upper case alphabet");
	else if(ch>=97&&ch<=122)
	printf("lower case alphabet");
	else if(ch>=48&&ch<=57)
	printf("it is a digit");
	else
	printf("it is a special character");	
	return 0;
}
