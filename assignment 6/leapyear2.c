#include<stdio.h>
int main()
{
  int x=checkyear();
  if(x==1)
   printf("Leap year");
  else
    printf("Not a leap year"); 	
}
int checkyear()
{
	int year;
	printf("Enter year");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0 || year%400==0)
	  return 1;
	else 
	  return 0;  
}
