#include<stdio.h>

int main()
{
	int i,n,f=1;
	printf("please enter of n : ");
	scanf("%d", &n);
	
	for(i=n;i>=1;i--)
	{
		f=f * i;
	}
	printf("the factorial is %d", f);
}
