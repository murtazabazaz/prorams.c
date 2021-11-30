#include<stdio.h>
#include<string.h>

int main()
{
	char a[100];
	char b[100];
	
	printf("enter string ");
	gets(a);
	
	printf("enter another ");
	gets(b);
	
   if(strcmp(a, b) == 0)
   {
   	printf("they are same");
   }
   else
   {
   	printf("they are different");
   }
	
}
