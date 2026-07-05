#include<stdio.h>
void main()
{
	int year;
	printf("Enter year");
	scanf("%d",&year);
	int x=checkYear(year);
	if(x==1)
	 printf("Year is leap");
	else
	 printf("Year is not loop"); 
	
}
int checkYear(int y)
{
	if(y%4==0 && y%100!=0 || y%400==0)
	  return 1;
	else
	 return 0;  
}
