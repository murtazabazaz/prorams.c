// length of string.

#include<stdio.h>

int main()
{
	char a[50];
	int i;
	printf("enter elements of a string : ");
	gets(a);
	
	i=0;
	while(a[i] !='\0')
	{
		i++;
	}
	printf("the length of string is %d", i);
}
