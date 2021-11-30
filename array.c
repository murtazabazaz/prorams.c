//create an array ,enter values,then print the same.

#include<stdio.h>

int main()
{
	int a[100];
	int i,n;
	printf("enter the size of the array : ");
	scanf("%d", &n);
	printf("enter the elements of integer array : ");
	for(i=0;i<n;i++)
	{
	scanf("%d", &a[i]);
		
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
}
