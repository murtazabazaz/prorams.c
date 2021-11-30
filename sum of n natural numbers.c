// sum of n natural numbers
#include<stdio.h>

int main()
{
	int n,i, result=0;
	
	printf("please enter the value of n : ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		result=result+n;
	}
	printf("the result is %d", result);
}
