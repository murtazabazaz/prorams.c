#include<stdio.h>

int main()
{
	float marks,max_marks,percentage;


	printf("please enter your marks ");

	scanf("%f", &marks);

	printf("please enter max_marks ");

	scanf("%f", &max_marks);

	percentage=marks/max_marks*100;

	if(percentage>=75)
	printf("You got a distinction. Congrats your percentage is %f", percentage);

	else if(percentage<75 && percentage>=60)
	printf("You got first division. congrats your percentage is %f", percentage);
	
	else if(percentage<60 && percentage>=40)
	printf("You passed. Congrats your percentage is %f", percentage);
	
	else
	printf("better luck next time. your percentage is %f", percentage);
	
}
