//searching an element in an array

#include<stdio.h>

int main()
{
	int a[12] = {3, 4, 5, 4, 1, 12, 13, 23, 45, 54, 21, 87};
	int n, i, flag=0;
	printf("enter the number to be searched ");
	scanf("%d", &n);
	
	for(i=0;i<12;i++)
	{
		if(n==a[i])
		{
			flag=1;
			printf("element found at %d th location ", i+1);
			break;
		}
	}
	if(flag==0)
	{
		printf("element not found");
	}
}
