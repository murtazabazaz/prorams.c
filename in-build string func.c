// in-built string functions.

#include<stdio.h>
#include<string.h>

int main()
{
	char a[100];
	char b[100];
	int len;
	printf("enter the string ");
	gets(a);
	
	len = strlen(a);
	printf("the length of string is %d ", len);

    printf("\n");
    strcat(b,a);
    puts(a);
}
