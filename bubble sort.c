

#include<stdio.h>

void bsort(int [], int);

int main()
{
	int a[100];
	int n,i;
	printf("enter size of array ");
	scanf("%d", &n);
	printf("enter elements of an array ");
	
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	
		for(i=0;i<n;i++)
		printf("%d ", a[i]);
		bsort(a, n);
		
	
}

void bsort(int x[], int y)
{
	int i,j, temp;
	for(i=0;i<y-1;i++)

		for(j=0;j<y-1;j++)
		
			if(x[j]>x[j+1])
			{
				temp = x[j];
				x[j] = x[j+1];
				x[j+1] = temp;
			}
			printf("after sorting ");
			for(i=0;i<y;i++)
			printf("%d", x[i]);
		
	
}
