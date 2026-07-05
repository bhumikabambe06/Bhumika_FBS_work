#include<stdio.h>
void main()
{
	int year;
	printf("Enter year");
	scanf("%d",&year);
	CheckYear(year);
	
}
void CheckYear(int y)
{
	if(y%4==0 && y%100!=0 || y%400==0)
	  printf("Year is leap");
	else
	 printf("Year is not leap");  
}
