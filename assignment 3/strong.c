#include<stdio.h>
void main()
{
	int n=145;
	int temp,digit;
	int fact;
	int i;
	int sum=0;
	temp=n;
	while(temp>0)
	{
		digit=temp%10;
		fact=1;
		i=1;
		while(i<=digit)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		temp=temp/10;
	}
	if(sum==n)
	{
		printf("Number is strong");
	}
	else
	{
		printf("Not a strong number");
	}
}
