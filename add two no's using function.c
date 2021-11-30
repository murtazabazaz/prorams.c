#include<stdio.h>

int add(int, int);

int main()
{
	int x;
	int y;
	int sum;
	printf("enter two integers ");
	scanf("%d %d", &x, &y);
	sum = add(x, y);
	printf("the sum of %d and %d is %d ", x, y, sum);
}

int add(int a, int b)

{
	int z;
	z = a + b;
	return z;
}
