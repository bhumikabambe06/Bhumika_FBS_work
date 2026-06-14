#include<stdio.h>
void main()
{
	int n=7;
	int temp;
	temp=n;
	int i=2;
	int flag=0;
	while(i<n)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0)
	{
		printf("Prime Number");
	}
	else
	{
		printf("Not Prime");
	}
}
