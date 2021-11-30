#include<stdio.h>

int main()
{
	int a[100];
	int i,n;
	printf("Please enter the size of the array");
	scanf("%", &n);
	printf("enter elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("the elemets of array are %d", a[i]);
	}
}
