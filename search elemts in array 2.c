#include<stdio.h>

int main()
{
	int a[5] = {1, 2, 3, 4, 6};
	int i, n ,flag=0;
	printf("enter element to be searched");
	scanf("%d", &n);
	
	for(i=0;i<5;i++)
	{
		if(n==a[i])
		{
			flag=1;
			printf("element found at %d th location", i);
			
		}
	}
	if(flag==0);
	{
		printf("element not found");
	}
	
}
