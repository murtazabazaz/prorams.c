#include<stdio.h>

int main()
{
	int a[4][3];
	int i, j;
	printf("please enter values of 4x3 matrix");
    for(i=0;i<=3;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d", &a[i][j]);
			
		}
	}
	
	
	for(i=0; i<=3; i++)
	{
		for(j=0; j<=2; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
}
