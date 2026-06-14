#include<stdio.h>
void main()
{
	int n=153;
	int temp,rem,sum=0;
	temp=n;
	while(n>0)
	{
	  rem=n%10;
	  sum=sum+rem*rem*rem;
	  n=n/10;	
	}
	if(temp==sum)
	{
		printf("Armstrong number");
	}
	else
	{
		printf("Not a armstrong number");
	}
}
