#include<stdio.h>

int main()
{
	int x,y,z;
	printf("enter two integers ");
	scanf("%d %d", &x,&y);
	
	z=x>y? x : y;
	printf("z = %d", z);
}
