// Transpose of a matrix.

#include<stdio.h>

int main()
{
	int a[10][10], b[10][10];
	int m,n;
	int i,j;
	
	printf("Enter number of rows and columns ");
	scanf("%d %d", &m, &n);
	printf("enter the elements of the matrix row wise ");
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	
	printf("\n");	
	printf("the entered matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	printf("\n");

	printf("the transpose matrix is: \n");

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
}
