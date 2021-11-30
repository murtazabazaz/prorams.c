//concatination of a string
#include<stdio.h>
#include<string.h>

int main()
{
	char a[100];
	char b[100];
	
	printf("enter first string ");
	gets(a);
	
	printf("enter another string");
	gets(b);
	
	strcat(a,b);
	printf("after concatination %s", a);
}
