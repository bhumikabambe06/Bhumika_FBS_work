#include<stdio.h>
void main()
{
	int age;
	printf("Enter age");
	scanf("%d",&age);
	if(age<12)
	{
		printf("Child");
	}
	else if(age>=12 && age>=19)
	{
		printf("Teenager");
	}
	else if(age>=20 && age>=59)
	{
		printf("adult");
	}
	else if(age>=60)
	{
		printf("senior citizen");
	}
	else
	{
		printf("invalid age");
	}
}
