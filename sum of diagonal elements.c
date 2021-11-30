// sum of diagonal elements of a 3x3 matrix.

#include<stdio.h>

int main()
{
	int a[3][3] = {3, 4, 6, 7, 8, 9, 3, 4, 6};
	int i,j, sum=0;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("the sum of all diagonal elements  =  %d", sum);
}

