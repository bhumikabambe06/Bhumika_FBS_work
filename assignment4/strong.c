#include<stdio.h>
void main()
{
	int i,n,temp,digit,fact,sum;
	for(i=1;i<=1000;i++)
	{
		temp=i;
		sum=0;
		while(temp>0)
		{
			digit=temp%10;
			fact=1;
			for(n=1;n<=digit;n++)
		{
			fact=fact*n;
		}
		sum=sum+fact;
		temp=temp/10;
		}
		if(sum==i)
		{
			printf("%d",i);
		}
	}
}
