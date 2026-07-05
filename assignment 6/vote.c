#include<stdio.h>
void iseligible();
void main()
{
	iseligible();
}
void iseligible()
{
	int age;
	printf("Enter age");
	scanf("%d",&age);
	if(age>=18)
	  printf("Eligible ");
	else
	  printf("Not eligible");  
}
