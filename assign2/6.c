#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	if(num%3==0 && num%5==0)
	{
		printf("Divisible by both");
	}
	else if(num%5==0)
	{
		printf("divisible by 5 but not 3");
	}
	else if(num%3==0)
	{
		printf("divisible by 3 but not 5");
	}
	else
	{
		printf("Divisible by none");
	}
}
