#include<stdio.h>
float calculatesalary();
int main()
{
	float x=calculatesalary();
	printf("The total salary is:%2f",x);
	return 0;
}
float calculatesalary()
{
	float basic;
	float da,ta,hra;
	float total;
	printf("Enter basic salary");
	scanf("%f",&basic);
	if(basic<=5000)
	{
		da=basic*10/100;
		ta=basic*20/100;
		hra=basic*25/100;
	}
	else
	{
		da=basic*15/100;
		ta=basic*25/100;
		hra=basic*30/100;
	}
	total=basic+da+ta+hra;
	return total;
}
