#include<stdio.h>

int fact(int);

int main()
{
	int x;
	int ans;
	printf("enter the number ");
	scanf("%d", &x);
	ans = fact(x);
	printf("the factorial of %d is %d ", x, ans);
	
}

int fact(int a)
{
	if(a>1)
	return a * fact(a-1);
	else
	return 1;
}
