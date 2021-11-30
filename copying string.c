
#include<stdio.h>

int main()
{
	char a[50], b[50];
	int i;
	printf("enter elements of a string : ");
	gets(a);
	
	i=0;
	while(a[i] !='\0')
	{
		b[i]=a[i];
		i++;
	}
	a[i]='\0';
	puts(a);
}
