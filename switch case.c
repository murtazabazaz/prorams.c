#include<stdio.h>

int main()
{
	int a,b,ans;
	int v;
	printf("please enter two numbers : ");
	scanf("%d %d", &a, &b);
	printf("enter 1 for adiition,  2 for subtraction,  3 for multipilication,  4 for division : ");
	scanf("%d", &v);
	
	switch(v)
	{
		case 1:
			ans=a+b;
			break;
		case 2:
			ans=a-b;
			break;
		case 3:
		    ans=a*b;
			break;
		case 4:
		    ans=a/b;
			break;
	    default:
		    printf("incorrect option ");
			break;	
	}
	printf("The answer is %d", ans);
	
}
